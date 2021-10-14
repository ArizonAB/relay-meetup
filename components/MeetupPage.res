@react.component
let make = (~meetup: Types.meetupEvent) => <>
  <Next.Head>
    <title> {React.string("Relay Meetup | " ++ meetup.title)} </title>
    <meta name="description" content=meetup.title />
    <meta name="og:image" content={"/static/img/meetups/meetup_" ++ (meetup.id ++ "_og.png")} />
    <MeetupStructuredData meetup />
  </Next.Head>
  <div className="md:pb-32 md:p-0">
    <Header
      title=meetup.title subtitle={"Meetup #" ++ (Data.getMeetupNum(meetup) + 1)->string_of_int}
    />
    <div className="bg-gray-100 border-t border-b border-gray-200">
      <div className="max-w-full md:max-w-4xl mx-auto md:mb-12 mb-2">
        <div className="md:pb-6 pb-2 pt-4 md:pt-0"> <MeetupMeta meetup /> </div>
      </div>
    </div>
    <div className="max-w-full md:max-w-2xl mx-auto md:mt-6 p-4 md:p-0">
      {switch (meetup.youtubeLink, meetup.meetupLink) {
      | (Some(youtubeLink), Some(meetupLink)) =>
        <div className="font-bold mb-4 border-b border-gray-300">
          <RenderMarkdown
            source=j`Check out the event on [YouTube]($youtubeLink) and [Meetup.com]($meetupLink).`
          />
        </div>
      | (None, Some(meetupLink)) =>
        <div className="mb-4 border-b border-gray-300">
          <RenderMarkdown
            source=j`**The YouTube link for the event will be posted just before the event starts here**.

Check out the event on [Meetup.com]($meetupLink).`
          />
        </div>
      | _ => React.null
      }}
      <div className=""> <RenderMarkdown source=meetup.desc /> </div>
      <div className="">
        <h2 className="text-2xl md:text-4xl md:pt-12 pt-6 text-center md:text-left">
          {React.string("Agenda")}
        </h2>
        <MeetupContent meetup />
      </div>
    </div>
  </div>
  <Footer />
</>

let default = make
