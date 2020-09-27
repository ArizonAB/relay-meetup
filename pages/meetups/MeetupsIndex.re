[@react.component]
let make = () => {
  <>
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
    </div>
    <Footer />
  </>;
};
