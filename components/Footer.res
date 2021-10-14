type footerItem = {
  text: string,
  link: string,
}

let footerItems = [
  {text: "About", link: "/"},
  {text: "Meetups", link: "/meetups"},
  {text: "Upcoming Themes", link: "/themes"},
  {text: "Contact", link: "/contact"},
]

@react.component
let make = () =>
  <footer className="mt-16 md:mt-20 md:pb-32 pt-16 justify-center bg-gray-900 text-white">
    <div className="md:pb-64 pb-32">
      <div className="flex flex-row justify-center items-center flex-wrap px-6">
        {footerItems
        ->Belt.Array.mapWithIndex((index, {text, link}) =>
          <div key=link className={index == 0 ? "my-2" : "my-2 ml-6"}>
            <Next.Link href=link> <a className=""> {React.string(text)} </a> </Next.Link>
          </div>
        )
        ->React.array}
      </div>
      <hr
        className="border-t border-white w-64 mx-auto mt-6"
        style={ReactDOMRe.Style.make(~opacity="0.1", ())}
      />
      <div className="text-center pt-12">
        <Next.Link href="/">
          <a className="cursor-pointer block">
            <div className="mx-auto inline-block mb-2">
              <img
                src="/static/logo.svg"
                alt="RelayMeetup.com"
                className="w-16 inline-block mb-2"
                style={ReactDOMRe.Style.make(~opacity="0.95", ())}
              />
            </div>
          </a>
        </Next.Link>
        <span className="text-lg"> {React.string("Relay Meetup")} </span>
      </div>
    </div>
    <div className="flex items-center justify-center text-xs">
      <div className="text-center flex flex-col">
        <a href="https://arizon.se" target="_blank">
          <img
            alt="Arizon Logotype"
            className="h-10 mx-auto cursor-pointer"
            src="/static/arizon-logo-white.svg"
          />
        </a>
        <div className="max-w-sm pt-2">
          <p>
            {React.string(
              "The Relay Meetup is proudly sponsored by Arizon, an IT-consultancy in Stockholm, Sweden.",
            )}
          </p>
        </div>
      </div>
    </div>
    <div className="text-xs text-center pt-16 pb-6">
      {React.string("Logotype made by ")}
      <a href="https://www.flaticon.com/free-icon/nodes_2165534" title="Vitaly Gorbachev">
        {React.string("Vitaly Gorbachev")}
      </a>
      {React.string(" from ")}
      <a href="https://www.flaticon.com/" title="Flaticon"> {React.string("www.flaticon.com")} </a>
    </div>
  </footer>
