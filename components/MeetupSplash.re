[@react.component]
let make = () => {
  let Next.Router.{query} = Next.Router.useRouter();
  switch (query->Js.Dict.get("id")) {
  | None => React.null
  | Some(id) =>
    switch (Data.meetups->Belt.Array.getBy(meetup => meetup.id == id)) {
    | None => React.null
    | Some(meetup) =>
      <div
        style={ReactDOMRe.Style.make(~width="100vw", ~height="100vh", ())}
        className="bg-white flex items-center justify-center">
        <div>
          <div className="leading-tight p-6 w-2/3 text-center mx-auto">
            <span className="text-4xl">
              {React.string("Meetup #" ++ meetup.id)}
            </span>
            <h1 style={ReactDOMRe.Style.make(~fontSize="5rem", ())}>
              {React.string(meetup.title)}
            </h1>
            <div className="mx-auto text-center mt-6">
              <CondensedParticipantsDisplayer avatarSize=`large meetup />
            </div>
          </div>
        </div>
        <div className="absolute bottom-0 right-0 pb-6 pr-6">
          <img
            alt="Arizon Logotype"
            className="h-8"
            src="/static/arizon-logo.svg"
          />
        </div>
        <div className="flex items-center absolute bottom-0 left-0 pb-6 pl-6">
          <img
            src="/static/logo.svg"
            alt="RelayMeetup.com"
            className="w-12 inline-block mb-2"
            style={ReactDOMRe.Style.make(~opacity="0.95", ())}
          />
          <div className="ml-2 text-4xl font-serif">
            {React.string("Relay Meetup")}
          </div>
        </div>
      </div>
    }
  };
};

let default = make;
