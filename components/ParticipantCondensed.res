let getAvatarSize = avatarSize =>
  switch avatarSize {
  | #small => " w-8 h-8 "
  | #medium => " w-16 h-16 "
  | #large => " w-32 h-32 "
  }

@react.component
let make = (~participant: Types.participant, ~avatarSize=#medium, ()) => {
  let avatarUrl = participant.github ++ ".png"

  <div className="-mx-3">
    <div
      title=participant.name
      className="shadow-lg rounded-full p-2 inline-block border border-gray-200 bg-white">
      <img
        alt=participant.name
        src=avatarUrl
        className={"rounded-full border border-gray-200 " ++ getAvatarSize(avatarSize)}
      />
    </div>
  </div>
}
