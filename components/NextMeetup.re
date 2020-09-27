[@react.component]
let make = () => {
  let nextMeetup =
    Data.meetups->Belt.Array.getBy(m => Util.eventHasPassed(m.date));

  switch (nextMeetup) {
  | None => React.null
  | Some(meetup) =>
    <div className="max-w-full md:max-w-2xl md:mx-auto">
      <h2 className="font-sans mx-auto md:mx-0 text-center md:text-left">
        {React.string("Our next online meetup")}
      </h2>
      <MeetupCard meetup />
    </div>
  };
};
