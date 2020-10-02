[@react.component]
let make = () =>
  <>
    <Next.Head>
      <title> {React.string("Relay Meetup | Themes for meetups")} </title>
      <meta name="description" content="Themes for meetups" />
    </Next.Head>
    <div className="pb-32 m-4 md:p-0">
      <Header
        title="Themes for meetups"
        subtitle="Ideas and thoughts around themes for upcoming meetups"
      />
      <div className="max-w-full md:max-w-2xl mx-auto">
        <div className="">
          <p>
            {React.string(
               {j|This page features a list of themes we'd like to cover in one or more meetups.|j},
             )}
          </p>
          <p>
            {React.string({j|All themes are present as GitHub issues on |j})}
            <a
              href="https://github.com/ArizonAB/relay-meetup/issues"
              target="_blank"
              className=Util.linkStyle>
              {React.string("the Relay Meetup GitHub repository")}
            </a>
            {React.string(
               {j|, labelled "Theme". Please feel free to both add your own idea to the issue tracker, as well as upvote any theme you're particularily interested in by reacting to the issue for that theme on GitHub|j},
             )}
          </p>
        </div>
        <div className="pt-4">
          <ul className="list-disc pl-6">
            {[|
               {j|Thinking in Relay - the difference in mindset with Relay compared to other frameworks|j},
               {j|Relay and suspense + concurrent mode|j},
               {j|Caching in Relay - how does it work?|j},
               {j|Strategies for updating the store after mutations|j},
               {j|Adding Relay support to your server|j},
               {j|Testing applications built with Relay|j},
               {j|The Node interface - how does it work and how can you leverage it|j},
               {j|Missing field handlers - teaching Relay about your schema to increase cache hits|j},
               {j|All things connections and pagination|j},
               {j|Server side rendering with Relay - what’s the current story?|j},
               {j|Using Relay offline|j},
               {j|Client side state management in Relay|j},
               {j|The Relay compiler in depth - how does it work, what does it actually do, and what does it enable?|j},
               {j|Preloading queries|j},
             |]
             ->Belt.Array.mapWithIndex((index, text) =>
                 <li key={index->string_of_int}> {React.string(text)} </li>
               )
             ->React.array}
          </ul>
        </div>
      </div>
    </div>
    <Footer />
  </>;

let default = make;
