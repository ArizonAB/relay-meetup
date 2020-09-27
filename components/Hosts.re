[@react.component]
let make = (~meetup: Types.meetupEvent) => {
  <div className="pt-6">
    <div className="">
      {meetup.hosts
       ->Belt.Array.map(participant =>
           <div key={participant.handle} className="w-32">
             <Participant participant subtext="Host" />
           </div>
         )
       ->React.array}
    </div>
  </div>;
};
