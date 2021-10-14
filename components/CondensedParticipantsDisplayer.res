@react.component
let make = (
  ~meetup: Types.meetupEvent,
  ~showTitles=false,
  ~showAvatars=true,
  ~avatarSize,
  ~align=#end_,
  (),
) => {
  let participants = React.useMemo1(() => meetup->Data.getParticipants, [meetup])

  <div>
    {showAvatars
      ? <div
          className={"flex flex-row-reverse " ++
          switch align {
          | #end_ => "justify-end"
          | #center => "justify-center"
          }}>
          {participants
          ->Belt.Array.reverse
          ->Belt.Array.map(participant =>
            <ParticipantCondensed avatarSize participant key=participant.handle />
          )
          ->React.array}
        </div>
      : React.null}
    {showTitles
      ? <div className="flex flex-row">
          {participants
          ->Belt.Array.map(participant =>
            <div key=participant.handle className="text-sm py-1 border-r border-gray-300 px-4">
              <a className=Util.linkStyle rel="nofollow noreferer" href=participant.github>
                {React.string(participant.name)}
              </a>
              <div className=""> {React.string(participant.work)} </div>
            </div>
          )
          ->React.array}
        </div>
      : React.null}
  </div>
}
