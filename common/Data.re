open Types;

module AllParticipants = {
  let alloy = {
    name: {j|Eloy Durán|j},
    twitter: Some("https://twitter.com/alloy"),
    github: "https://github.com/alloy",
    handle: "alloy",
    work: "Microsoft",
  };

  let kassens = {
    name: {|Jan Kassens|},
    twitter: Some("https://twitter.com/kassens"),
    github: "https://github.com/kassens",
    handle: "kassens",
    work: "Facebook, Relay Core team",
  };

  let zth = {
    name: {|Gabriel Nordeborn|},
    twitter: Some("https://twitter.com/___zth___"),
    github: "https://github.com/zth",
    handle: "zth",
    work: "Arizon Consulting",
  };
};

let meetup_2020_10_21 = {
  id: "1",
  date: {
    year: 2020,
    month: 9,
    day: 21,
    hour: 19,
    minute: 0,
  },
  title: {j|Relay in production at Artsy, and updating the cache after mutations|j},
  desc: {j|In our first meetup ever, we'll dive deep into the history of Relay at [Artsy](https://www.artsy.net) with [Eloy Durán](https://twitter.com/alloy), formerly the Director of Engineering. We'll talk about Eloy's background, how Relay came to Artsy, onboarding new developers to Relay, and how the experience of using Relay at scale has been throughout the years.

In our second segment of the meetup we'll dig into strategies for updating the cache after mutations in a panel discussion with [Jan Kassens](https://twitter.com/kassens) from the Relay Core team at Facebook, and Eloy again. We'll discuss simple as well as more complex scenarios, and what strategies have worked best in the long run for Facebook and Artsy - two very different applications.|j},
  meetupLink: None,
  content: [|
    Interview({
      subject: AllParticipants.alloy,
      interviewer: AllParticipants.zth,
      topic: {|Relay at Artsy throughout the years|},
      desc: {|In this chat with [Eloy](https://twitter.com/alloy) we'll talk about how Artsy adopted Relay, Eloy's experience onboarding new developers to Relay, and how the experience of working with Relay throughout the years has been.|},
    }),
    PanelDiscussion({
      topic: "Updating the cache after mutations",
      desc: {|We dive into strategies for updating the cache after mutations. We start off in a few scenarios designed to mimic things you tend to end up seeing in the wild, and discuss possible approaches, as well as how Artsy and Facebook have traditionally approached these problems.|},
      participants: [|
        AllParticipants.kassens,
        AllParticipants.alloy,
        AllParticipants.zth,
      |],
    }),
  |],

  hosts: [|AllParticipants.zth|],
};

let meetups = [|meetup_2020_10_21|];

let getParticipants = meetup => {
  let participants: array(participant) = [||];

  let addParticipantsFromArray = arr => {
    arr->Belt.Array.forEach(participant => {
      switch (participants->Belt.Array.getBy(p => p == participant)) {
      | Some(_) => ()
      | None =>
        let _ = participants->Js.Array2.push(participant);
        ();
      }
    });
  };

  meetup.content
  ->Belt.Array.forEach(c =>
      switch (c) {
      | Interview({subject}) =>
        let _ = participants->Js.Array2.push(subject);
        ();
      | Presentation({presenter}) =>
        let _ = participants->Js.Array2.push(presenter);
        ();
      | PanelDiscussion({participants}) =>
        participants->addParticipantsFromArray
      }
    );

  meetup.hosts->addParticipantsFromArray;

  participants;
};

let dateToShort = i =>
  switch (i) {
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
  };

let dateToFull = i =>
  switch (i) {
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
  };

let getMeetupNum = meetup => meetups->Js.Array2.findIndex(m => m == meetup);
