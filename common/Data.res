open Types

module AllParticipants = {
  let alloy = {
    name: j`Eloy Durán`,
    twitter: Some("https://twitter.com/alloy"),
    github: "https://github.com/alloy",
    handle: "alloy",
    work: "Microsoft",
  }

  let kassens = {
    name: `Jan Kassens`,
    twitter: Some("https://twitter.com/kassens"),
    github: "https://github.com/kassens",
    handle: "kassens",
    work: "Facebook, Relay core team",
  }

  let zth = {
    name: `Gabriel Nordeborn`,
    twitter: Some("https://twitter.com/___zth___"),
    github: "https://github.com/zth",
    handle: "zth",
    work: "Arizon Consulting",
  }

  let robrichard = {
    name: `Rob Richard`,
    twitter: Some("https://twitter.com/rob_richard"),
    github: "https://github.com/robrichard",
    handle: "robrichard",
    work: "1stdibs",
  }

  let lilianammatos = {
    name: `Liliana Matos`,
    twitter: Some("https://twitter.com/lilianammmatos"),
    github: "https://github.com/lilianammmatos",
    handle: "lilianammmatos",
    work: "1stdibs",
  }

  let sibelius = {
    name: `Sibelius Seraphini`,
    twitter: Some("https://twitter.com/sseraphini"),
    github: "https://github.com/sibelius",
    handle: "sibelius",
    work: "Entria Tech",
  }

  let josephsavona = {
    name: `Joe Savona`,
    twitter: Some("https://twitter.com/en_js"),
    github: "https://github.com/josephsavona",
    handle: "en_js",
    work: "Facebook, Relay core team",
  }

  let mattkrick = {
    name: `Matthew Krick`,
    twitter: Some("https://twitter.com/mattkrick"),
    github: "https://github.com/mattkrick",
    handle: "mattkrick",
    work: "Parabol",
  }
}

let meetup_2020_10_21 = {
  id: "1",
  date: {
    year: 2020,
    month: 9,
    day: 21,
    hour: 19,
    minute: 0,
  },
  title: j`Relay in production at Artsy, and updating the cache after mutations`,
  desc: j`In our first meetup ever, we'll dive deep into the history of Relay at [Artsy](https://www.artsy.net) with [Eloy Durán](https://twitter.com/alloy), formerly the Director of Engineering. We'll talk about Eloy's background, how Relay came to Artsy, onboarding new developers to Relay, and how the experience of using Relay at scale has been throughout the years.

In our second segment of the meetup we'll dig into strategies for updating the cache after mutations in a panel discussion with [Jan Kassens](https://twitter.com/kassens) from the Relay core team at Facebook, and Eloy again. We'll discuss simple as well as more complex scenarios, and what strategies have worked best in the long run for Facebook and Artsy - two very different applications.`,
  meetupLink: Some("https://www.meetup.com/relay-meetup/events/273730799/"),
  youtubeLink: Some("https://www.youtube.com/watch?v=wLrityvveSQ"),
  content: [
    Interview({
      subject: AllParticipants.alloy,
      interviewer: AllParticipants.zth,
      topic: `Relay at Artsy throughout the years`,
      desc: `In this chat with [Eloy](https://twitter.com/alloy) we'll talk about how Artsy adopted Relay, Eloy's experience onboarding new developers to Relay, and how the experience of working with Relay throughout the years has been.`,
    }),
    PanelDiscussion({
      topic: "Updating the cache after mutations",
      desc: `We dive into strategies for updating the cache after mutations. We start off in a few scenarios designed to mimic things you tend to end up seeing in the wild, and discuss possible approaches, as well as how Artsy and Facebook have traditionally approached these problems.`,
      participants: [AllParticipants.kassens, AllParticipants.alloy, AllParticipants.zth],
    }),
  ],
  hosts: [AllParticipants.zth],
}

let meetup_2020_12_03 = {
  id: "2",
  date: {
    year: 2020,
    month: 11,
    day: 2,
    hour: 19,
    minute: 0,
  },
  title: j`Learning Relay, and the @defer + @stream directives`,
  desc: j`Join us for an evening of Relay! [Sibelius](https://twitter.com/sseraphini), a well known face in the Relay community, will guide us through how we can use his Relay workshop to get started learning (and teaching!) Relay. Don't miss this if you're curious about Relay but don't know where to get started.

We'll also have [Liliana Matos](https://github.com/lilianammmatos) and [Rob Richard](https://twitter.com/rob_richard) from [1stdibs.com](https://1stdibs.com) come on and talk about the @defer and @stream directives that they've been championing bringing to the official GraphQL specification. We'll cover what those directives do, how you can use them with Relay, and how the work moving them forward in the specification has been.

[Joe Savona](https://github.com/josephsavona), from the Relay core team, will join us as well, giving his insight on how Facebook are using said directives.`,
  meetupLink: Some("https://www.meetup.com/relay-meetup/events/274367568/"),
  youtubeLink: Some("https://www.youtube.com/watch?v=5E5KdSU7Exs"),
  content: [
    Presentation({
      presenter: AllParticipants.sibelius,
      title: `Getting started with Relay through the Relay Workshop`,
      desc: `[Sibelius](https://twitter.com/sseraphini) has put together material for a workshop teaching you to use Relay. Join us as Sibelius walk us through how to use and get started with the workshop material.`,
    }),
    Showcase({
      topic: "@defer and @stream",
      desc: `Liliana Matos and Rob Richard from 1stdibs.com has championed adding the @defer and @stream directives to the official GraphQL specification. In this session we'll talk about what @defer and @stream are, why they're useful, how you use them with Relay, and how you can help out in testing the new directives.

Joe Savona, from the Relay core team at Facebook, will also be joining us for a discussion on how Facebook is using said directives.`,
      participants: [
        AllParticipants.lilianammatos,
        AllParticipants.robrichard,
        AllParticipants.josephsavona,
        AllParticipants.zth,
      ],
    }),
  ],
  hosts: [AllParticipants.zth],
}

let meetup_2021_02_04 = {
  id: "3",
  date: {
    year: 2021,
    month: 1,
    day: 10,
    hour: 19,
    minute: 0,
  },
  title: j`Relay core team community Q&A`,
  desc: j`This entire meetup is dedicated to a community Q&A with the Relay core team. We're joined by [Joe Savona](https://github.com/josephsavona) and a few more members of the team, and together we'll discuss and explore what the core team is up to and excited about in 2021. We'll also try and have as many questions from the community answered as time allows.

Here's a list of things we'll cover:
- The Relay hooks API going stable in H1 2021
- React Server Components + Relay
- An open source release of the new Rust based Relay compiler
- Relay IDE support (LSP) currently being worked on
- Partial rendering (currently experimental)


Got questions for the Q&A? Please [DM them to us on Twitter](https://twitter.com/RelayMeetup). Don't have Twitter? Join our [Discord](https://discord.gg/ft5cJmz) and PM me (Gabriel Nordeborn#8445) your questions there instead. We'll try and have as many questions as possible answered!`,
  meetupLink: Some("https://www.meetup.com/relay-meetup/events/275945079/"),
  youtubeLink: Some("https://www.youtube.com/watch?v=6wnlzz7q8So"),
  content: [
    Q_A({
      participants: [AllParticipants.josephsavona],
      topic: `Community Q&A`,
      desc: `[Joe Savona](https://github.com/josephsavona) and a few more members of the Relay core team at Facebook joins us for a Relay community Q&A.`,
    }),
  ],
  hosts: [AllParticipants.zth],
}

let meetup_2021_10_27 = {
  id: "4",
  date: {
    year: 2021,
    month: 9,
    day: 27,
    hour: 20,
    minute: 0,
  },
  title: j`Relay at Parabol`,
  desc: j`Join us as Matthew Krick from Parabol.co tells us about Parabol and their long time usage of Relay. 
  
For those who don't know Parabol, it's a VC backed open source first product that's probably the largest production code base featuring Relay that's also open source. We'll talk about how Parabol uses and has been using Relay and how it is to build professional software that's fully open source.`,
  meetupLink: None,
  youtubeLink: None,
  content: [
    Interview({
      subject: AllParticipants.mattkrick,
      interviewer: AllParticipants.zth,
      topic: `Relay at Parabol.co`,
      desc: `[Matthew Krick](https://github.com/mattkrick) joins us to talk about Relay at Parabol.co.`,
    }),
  ],
  hosts: [AllParticipants.zth],
}

let meetups = [meetup_2020_10_21, meetup_2020_12_03, meetup_2021_02_04, meetup_2021_10_27]

let getParticipants = meetup => {
  let participants: array<participant> = []

  let addParticipantsFromArray = arr =>
    arr->Belt.Array.forEach(participant =>
      switch participants->Belt.Array.getBy(p => p == participant) {
      | Some(_) => ()
      | None =>
        let _ = participants->Js.Array2.push(participant)
      }
    )

  meetup.content->Belt.Array.forEach(c =>
    switch c {
    | Interview({subject}) =>
      let _ = participants->Js.Array2.push(subject)
    | Presentation({presenter}) =>
      let _ = participants->Js.Array2.push(presenter)
    | Q_A({participants})
    | Showcase({participants})
    | PanelDiscussion({participants}) =>
      participants->addParticipantsFromArray
    }
  )

  meetup.hosts->addParticipantsFromArray

  participants
}

let dateToShort = i =>
  switch i {
  | 0 => "Jan"
  | 1 => "Feb"
  | 2 => "Mar"
  | 3 => "Apr"
  | 4 => "May"
  | 5 => "Jun"
  | 6 => "Jul"
  | 7 => "Aug"
  | 8 => "Sep"
  | 9 => "Oct"
  | 10 => "Nov"
  | 11 => "Dec"
  | _ => "-"
  }

let dateToFull = i =>
  switch i {
  | 0 => "January"
  | 1 => "February"
  | 2 => "March"
  | 3 => "April"
  | 4 => "May"
  | 5 => "June"
  | 6 => "July"
  | 7 => "August"
  | 8 => "September"
  | 9 => "October"
  | 10 => "November"
  | 11 => "December"
  | _ => "-"
  }

let getMeetupNum = meetup => meetups->Js.Array2.findIndex(m => m == meetup)
