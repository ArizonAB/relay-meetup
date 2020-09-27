[@react.component]
let make = (~participant: Types.participant, ()) => {
  let avatarUrl = participant.github ++ ".png";

  <div className="-mx-3">
    <div
      title={participant.name}
      className="shadow-lg rounded-full p-2 inline-block border border-gray-200 bg-white">
      <img
        alt={participant.name}
        src=avatarUrl
        className="rounded-full w-16 h-16 border border-gray-200"
      />
    </div>
  </div>;
};
