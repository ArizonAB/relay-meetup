[@react.component]
let make = (~title, ~subtitle=?) => {
  <div className="w-full relative md:mt-32 p-4 md:p-0">
    <div
      className="flex flex-col justify-center items-center relative h-full text-center">
      <div className="pt-16 pb-8 text-center max-w-xl">
        <Next.Link href="/">
          <a className="cursor-pointer">
            <div className="mx-auto inline-block mb-2 spin">
              <img
                src="/static/logo.svg"
                alt="RelayMeetup.com"
                className="w-16 inline-block"
                style={ReactDOMRe.Style.make(~opacity="0.95", ())}
              />
            </div>
          </a>
        </Next.Link>
        <h1 className="text-4xl md:text-6xl leading-tight">
          {React.string(title)}
        </h1>
        {switch (subtitle) {
         | Some(subtitle) => <SubHeader text=subtitle />
         | None => React.null
         }}
      </div>
    </div>
  </div>;
};
