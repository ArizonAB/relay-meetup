[@react.component]
let make = (~participants) => {
  <div>
    <div className="flex flex-row-reverse justify-end">
      {participants
       ->Belt.Array.reverse
       ->Belt.Array.map(participant =>
           <Participant participant key={participant.handle} />
         )
       ->React.array}
    </div>
  </div>;
};
