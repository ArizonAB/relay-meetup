[@react.component]
let make = (~meetup: Types.meetupEvent) => {
  meetup.content
  ->Belt.Array.map(c =>
      switch (c) {
      | PanelDiscussion(panelDiscussion) =>
        <div
          key={"panel-discussion-" ++ panelDiscussion.topic} className="py-6">
          <div className="bg-white shadow-lg">
            <div className="" key={panelDiscussion.topic}>
              <div
                className="p-6" style={ReactDOMRe.Style.make(~flex="4", ())}>
                <h2 className="font-sans text-gray-700 uppercase text-sm">
                  {React.string("Panel Discussion")}
                </h2>
                <h3 className="text-2xl">
                  panelDiscussion.topic->React.string
                </h3>
                <p> {React.string(panelDiscussion.desc)} </p>
              </div>
            </div>
            <div className="p-2 pt-6 bg-gray-100 border-t border-gray-300">
              <div
                className="flex flex-row md:justify-center overflow-scroll w-full">
                {panelDiscussion.participants
                 ->Belt.Array.map(participant =>
                     <div key={participant.handle} className="w-48 mx-2">
                       <Participant participant />
                     </div>
                   )
                 ->React.array}
              </div>
            </div>
          </div>
        </div>
      | Presentation(presentation) =>
        <div className="py-6" key={"presentation-" ++ presentation.title}>
          <div className="flex flex-row bg-white shadow-lg">
            <div className="flex-1 p-2 bg-gray-100 border-r border-gray-300">
              <Participant participant={presentation.presenter} />
            </div>
            <div className="p-6" style={ReactDOMRe.Style.make(~flex="4", ())}>
              <h2 className="font-sans text-gray-700 uppercase text-sm">
                {React.string("Presentation")}
              </h2>
              <h3 className="text-2xl"> presentation.title->React.string </h3>
              <p> {React.string(presentation.desc)} </p>
            </div>
          </div>
        </div>
      | Interview(interview) =>
        <div className="py-4 md:py-6" key={"interview-" ++ interview.topic}>
          <div className="flex flex-col md:flex-row bg-white shadow-lg">
            <div
              className="flex-1 p-2 bg-gray-100 border-b md:border-b-0 md:border-r border-gray-300">
              <Participant participant={interview.subject} />
            </div>
            <div className="p-6" style={ReactDOMRe.Style.make(~flex="4", ())}>
              <h2 className="font-sans text-gray-700 uppercase text-sm">
                {React.string("Interview")}
              </h2>
              <h3 className="text-2xl"> interview.topic->React.string </h3>
              <p> {React.string(interview.desc)} </p>
            </div>
          </div>
        </div>
      }
    )
  ->React.array;
};
