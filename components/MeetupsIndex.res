@react.component
let make = () => <>
  <Next.Head>
    <title> {React.string("Relay Meetup | All meetups")} </title>
    <meta name="description" content="All meetups" />
  </Next.Head>
  <div className="pb-32">
    <Header title="Meetups" subtitle="See all upcoming and past meetups." />
    <div
      className="bg-gray-100 border-t border-b py-6 my-6 md:mt-12 border-gray-200 p-4 md:p-0 md:pt-4">
      <NextMeetup />
    </div>
    <div className="max-w-full md:max-w-2xl md:mx-auto p-4">
      {Data.meetups
      ->Belt.Array.keep(m => !Util.eventHasPassed(m.date))
      ->Js.Array2.sortInPlaceWith((m1, m2) => m1.date->Util.dateIsGreaterThan(m2.date) ? -1 : 1)
      ->Belt.Array.map(meetup => <div key=meetup.id> <MeetupCard meetup /> </div>)
      ->React.array}
    </div>
  </div>
  <Footer />
</>
