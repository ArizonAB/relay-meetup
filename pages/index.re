[@react.component]
let make = () =>
  <>
    <Next.Head>
      <title>
        {React.string(
           "Relay Meetup | A global, online meetup on Relay, the GraphQL client",
         )}
      </title>
      <meta
        name="description"
        content="A global, online meetup on Relay, the GraphQL client"
      />
    </Next.Head>
    <div className="md:pb-32 pb-6">
      <Header
        title="Relay Meetup"
        subtitle="A global, online meetup on Relay, the GraphQL client"
      />
      <div
        className="bg-gray-100 border-t border-b py-6 my-6 mt-2 md:mt-12 border-gray-200 md:px-0 px-4">
        <NextMeetup />
      </div>
      <div className="max-w-full md:max-w-2xl mx-auto p-4 md:p-0">
        <div className="pt-12">
          <h2 className="text-4xl">
            {React.string("Your natural place for Relay content")}
          </h2>
          <p>
            {React.string(
               {j|The Relay community, while fairly modest in size, is thriving, full of innovation, and as active as ever. This meetup is both a celebration of Relay, as well as a natural place for people using Relay to gather and share knowledge.|j},
             )}
          </p>
          <p>
            {React.string(
               {j|Every month we'll host an event filled with interesting and actionable content on using Relay. All events are fully remote, so anyone can join on equal terms from anywhere in the world.|j},
             )}
          </p>
          <p>
            {React.string(
               {j|All events are broadcasted live on YouTube, and recorded so you can watch them at any time.|j},
             )}
          </p>
        </div>
        <div className="pt-6">
          <h3 className="text-xl">
            {React.string("Presentations and interviews")}
          </h3>
          <p>
            {React.string(
               {j|The first part of each meetup will feature presentations or interviews with members of the Relay community.|j},
             )}
          </p>
          <p>
            {React.string(
               {j|Presentations can be anything from explanations of concepts, to case studies of Relay usage in the wild, to live coding demos of interesting and cool things in and around Relay.|j},
             )}
          </p>
          <h3 className="text-xl mt-6">
            {React.string("A hands-on theme")}
          </h3>
          <p>
            {React.string(
               {j|The second part of each meetup will focus on a particular aspect of using Relay as hands-on as we can. Together with a panel of experienced Relay users, bringing invaluable industry expertise, we'll discuss best practices and surface valuable knowledge for solving the particular problem we're discussing.|j},
             )}
          </p>
        </div>
      </div>
      <div className="max-w-full md:max-w-2xl mx-auto p-4 md:p-0">
        <div className="md:pt-6">
          <h2 className="text-4xl"> {React.string("Get involved")} </h2>
          <p>
            {React.string({j|Follow |j})}
            <Next.Link href="/themes">
              <a className=Util.linkStyle> {React.string("this link")} </a>
            </Next.Link>
            {React.string(
               {j| to see a list of themes we've planned to cover on upcoming meetups.|j},
             )}
          </p>
          <p>
            {React.string(
               {j|Want to present or participate in some other way on an upcoming meetup? Reach out to |j},
             )}
            <a
              rel="noreferer"
              target="_blank"
              href={
                Data.AllParticipants.zth.twitter
                ->Belt.Option.getWithDefault("#")
              }
              className=Util.linkStyle>
              {React.string("Gabriel on Twitter")}
            </a>
            {React.string({j| (DMs are open).|j})}
          </p>
          <p>
            {React.string(
               {j|Don't hesitate to reach out even if you don't have a clear idea of what you'd like to participate with - we'll figure it out together. Sometimes the most simple things or mundane things are the most valuable.|j},
             )}
          </p>
        </div>
        <div
          className="bg-gray-100 shadow-lg mt-12 border border-gray-200 flex md:flex-row flex-col">
          <div
            className="p-2 flex-1 flex justify-center items-center md:border-r border-b md:border-b-0 border-gray-300">
            <Participant participant=Data.AllParticipants.zth subtext="Host" />
          </div>
          <div
            className="p-6 bg-white"
            style={ReactDOMRe.Style.make(~flex="2", ())}>
            <p>
              {React.string(
                 {j|Hi! My name is Gabriel, and I host the Relay Meetup. I'm a big fan of Relay, and I've contributed to Relay and the Relay community in a number of ways throughout the years.|j},
               )}
            </p>
            <p>
              {React.string(
                 {j|I'm also a partner at Arizon, an IT-consultancy in Stockholm, Sweden.|j},
               )}
            </p>
            <p>
              {React.string(
                 {j|We love Relay at Arizon, and we want to give back to the Relay community somehow. That's why we decided to launch this meetup, to help provide a natural place for the Relay community to gather.|j},
               )}
            </p>
          </div>
        </div>
      </div>
    </div>
    <Footer />
  </>;

let default = make;
