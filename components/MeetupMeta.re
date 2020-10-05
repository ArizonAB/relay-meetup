[@react.component]
let make = (~meetup: Types.meetupEvent, ()) => {
  <div className="md:pt-12">
    <div
      className="flex-1 pt-2 flex items-center md:justify-center md:flex-row flex-col">
      <div className="flex w-full md:w-auto">
        <MeetupDateDisplayer meetup />
      </div>
      <div className="md:ml-6 md:border-l border-gray-200">
        <div className="md:ml-8 md:pt-0 pt-6">
          <CondensedParticipantsDisplayer avatarSize=`medium meetup />
        </div>
      </div>
    </div>
  </div>;
};
