[@react.component]
let make = (~meetup: Types.meetupEvent) => {
  let hour = Util.toTwoDigitStr(meetup.date.hour);
  let minute = Util.toTwoDigitStr(meetup.date.minute);

  <>
    <div
      className="font-sans uppercase flex-1 md:flex-none flex align-middle justify-end">
      <div
        className="flex flex-col leading-none pr-6 border-r border-gray-300 text-right md:text-left">
        <div className="text-4xl md:text-6xl font-bold">
          {React.string(meetup.date.day->string_of_int)}
        </div>
        <div className="text-lg">
          {React.string(meetup.date.month->Data.dateToFull)}
        </div>
      </div>
    </div>
    <div
      className="pl-6 flex flex-col flex-1 md:flex-none items-start md:items-center justify-center">
      <div className="text-md">
        {React.string(hour ++ ":" ++ minute ++ " GMT+2")}
      </div>
      <div className="text-xs">
        <a
          rel="noreferrer noopener"
          className=Util.linkStyle
          target="_blank"
          href={
            "https://www.thetimezoneconverter.com/?t="
            ++ hour
            ++ "%3A"
            ++ minute
            ++ "&tz=Stockholm"
          }>
          {React.string("Check your timezone")}
        </a>
      </div>
    </div>
  </>;
};
