@react.component
let make = (~meetup: Types.meetupEvent) =>
  <div className="pt-6">
    <div className="">
      {meetup.content
      ->Belt.Array.keepMap(c =>
        switch c {
        | PanelDiscussion(p) => Some(p)
        | _ => None
        }
      )
      ->Belt.Array.map(panelDiscussion =>
        <div key=panelDiscussion.topic className="bg-white shadow-lg">
          <div className="" key=panelDiscussion.topic>
            <div className="p-6" style={ReactDOMRe.Style.make(~flex="4", ())}>
              <h2 className="font-sans text-gray-700 uppercase text-sm">
                {React.string("Panel Discussion")}
              </h2>
              <h3 className="text-2xl"> {panelDiscussion.topic->React.string} </h3>
              <p> {React.string(panelDiscussion.desc)} </p>
            </div>
          </div>
          <div className="p-2 pt-6 bg-gray-100 border-t border-gray-300">
            <div className="flex flex-row justify-center">
              {panelDiscussion.participants
              ->Belt.Array.map(participant =>
                <div key=participant.handle className="max-w-48 mx-2">
                  <Participant participant />
                </div>
              )
              ->React.array}
            </div>
          </div>
        </div>
      )
      ->React.array}
    </div>
  </div>
