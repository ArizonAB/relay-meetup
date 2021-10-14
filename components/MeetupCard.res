@react.component
let make = (~meetup: Types.meetupEvent) =>
  <div className="flex flex-col pb-4">
    <div className="flex-1 pt-2 flex items-center md:flex-row flex-col">
      <div className="flex w-full md:w-auto"> <MeetupDateDisplayer meetup /> </div>
      <div className="md:ml-6 md:border-l border-gray-200">
        <div className="md:ml-8 md:pt-0 pt-6">
          <CondensedParticipantsDisplayer avatarSize=#medium meetup />
        </div>
      </div>
    </div>
    <div className="pt-6 md:pt-8" style={ReactDOMRe.Style.make(~flex="3", ())}>
      <Next.Link href={"/meetups/" ++ meetup.id}>
        <a className="cursor-pointer">
          <h3 className="text-2xl"> {React.string(meetup.title)} </h3>
        </a>
      </Next.Link>
      <div className="pt-2"> <RenderMarkdown source=meetup.desc /> </div>
      <div className="pb-4 pt-2">
        <Next.Link href={"/meetups/" ++ meetup.id}>
          <a className="cursor-pointer px-4 py-2 bg-gray-800 text-white text-sm shadow-md">
            {React.string("View event")}
          </a>
        </Next.Link>
      </div>
    </div>
  </div>
