[@react.component]
let make = (~meetup: Types.meetupEvent) => {
  <div className="pt-6">
    <div className="">
      {meetup.content
       ->Belt.Array.keepMap(c =>
           switch (c) {
           | Presentation(p) => Some(p)
           | PanelDiscussion(_)
           | Interview(_) => None
           }
         )
       ->Belt.Array.map(presentation =>
           <div
             className="flex flex-row bg-white shadow-lg"
             key={presentation.title}>
             <div className="flex-1 p-2 bg-gray-100 border-r border-gray-300">
               <Participant participant={presentation.presenter} />
             </div>
             <div
               className="p-6" style={ReactDOMRe.Style.make(~flex="4", ())}>
               <h2 className="font-sans text-gray-700 uppercase text-sm">
                 {React.string("Presentation")}
               </h2>
               <h3 className="text-2xl"> presentation.title->React.string </h3>
               <p> {React.string(presentation.desc)} </p>
             </div>
           </div>
         )
       ->React.array}
    </div>
  </div>;
};
