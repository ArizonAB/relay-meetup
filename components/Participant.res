@react.component
let make = (~participant: Types.participant, ~subtext=?, ()) => {
  let avatarUrl = participant.github ++ ".png"

  <div className="text-center">
    <div className="shadow-lg rounded-full p-2 inline-block border border-gray-200 bg-white">
      <img
        alt=participant.name src=avatarUrl className="rounded-full w-24 h-24 border border-gray-200"
      />
    </div>
    <a href=participant.github target="_blank" className="cursor-pointer">
      <h4 className="font-sans text-md font-semibold"> {React.string(participant.name)} </h4>
    </a>
    <p className="text-sm">
      {React.string(subtext->Belt.Option.getWithDefault(participant.work))}
    </p>
  </div>
}
