[@react.component]
let make = () =>
  <>
    <Next.Head>
      <title> {React.string("Relay Meetup | Get in touch")} </title>
      <meta name="description" content="Get in touch" />
    </Next.Head>
    <div className="pb-32 m-4 md:p-0">
      <Header title="Contact" subtitle="Get in touch" />
      <div className="max-w-full md:max-w-2xl mx-auto">
        <div className="">
          <p>
            {React.string({j|Please feel free to reach out to |j})}
            <a
              href={
                Data.AllParticipants.zth.twitter
                ->Belt.Option.getWithDefault("")
              }
              target="_blank"
              className=Util.linkStyle>
              {React.string("Gabriel on Twitter")}
            </a>
            {React.string(
               {j| for any questions you might have about this meetup.|j},
             )}
          </p>
        </div>
      </div>
    </div>
    <Footer />
  </>;

let default = make;
