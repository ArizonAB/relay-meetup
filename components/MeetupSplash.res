@react.component
let make = () => {
  let {Next.Router.query: query} = Next.Router.useRouter()
  switch query->Js.Dict.get("id") {
  | None => React.null
  | Some(id) =>
    switch Data.meetups->Belt.Array.getBy(meetup => meetup.id == id) {
    | None => React.null
    | Some(meetup) =>
      <div
        style={ReactDOMRe.Style.make(~width="100vw", ~height="100vh", ())}
        className="bg-white flex items-center justify-center">
        <div>
          <div className="leading-tight p-6 w-full text-center mx-auto">
            <div className="text-4xl mb-6"> {React.string("Meetup #" ++ meetup.id)} </div>
            <h1 style={ReactDOMRe.Style.make(~fontSize="4rem", ())}>
              {React.string(meetup.title)}
            </h1>
            <div className="mx-auto text-center mt-6">
              <CondensedParticipantsDisplayer align=#center avatarSize=#large meetup />
            </div>
          </div>
        </div>
        <div className="absolute bottom-0 right-0 pb-6 pr-6">
          <img alt="Arizon Logotype" className="h-8" src="/static/arizon-logo.svg" />
        </div>
        <div className="flex items-center absolute bottom-0 left-0 pb-3 pl-4">
          <img
            src="/static/logo.svg"
            alt="RelayMeetup.com"
            className="w-10 inline-block mb-2"
            style={ReactDOMRe.Style.make(~opacity="0.95", ())}
          />
          <div className="ml-2 text-2xl font-serif"> {React.string("RelayMeetup.com")} </div>
        </div>
      </div>
    }
  }
}

let default = make
