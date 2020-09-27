[@react.component]
let make = (~meetup: Types.meetupEvent) =>
  <>
    <Next.Head>
      <title> {React.string("Relay Meetup | " ++ meetup.title)} </title>
      <meta name="description" content={meetup.title} />
      <MeetupStructuredData meetup />
    </Next.Head>
    <div className="md:pb-32 md:p-0">
      <Header
        title={meetup.title}
        subtitle={
          "Meetup #" ++ (Data.getMeetupNum(meetup) + 1)->string_of_int
        }
      />
      <div className="bg-gray-100 border-t border-b border-gray-200">
        <div className="max-w-full md:max-w-4xl mx-auto md:mb-12 mb-2">
          <div className="md:pb-6 pb-2 pt-4 md:pt-0">
            <MeetupMeta meetup />
          </div>
        </div>
      </div>
      <div className="max-w-full md:max-w-2xl mx-auto md:mt-12 p-4 md:p-0">
        <div className=""> {meetup.desc} </div>
        <div className="">
          <h2
            className="text-2xl md:text-4xl md:pt-12 pt-6 text-center md:text-left">
            {React.string("Agenda")}
          </h2>
          <MeetupContent meetup />
        </div>
      </div>
    </div>
    <Footer />
  </>;

let default = make;
