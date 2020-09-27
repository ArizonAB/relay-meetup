let dateTimestampFromDate = (date: Types.date) => {
  string_of_int(date.year)
  ++ "-"
  ++ Util.toTwoDigitStr(date.month + 1)
  ++ "-"
  ++ Util.toTwoDigitStr(date.day)
  ++ "T"
  ++ Util.toTwoDigitStr(date.hour)
  ++ ":"
  ++ Util.toTwoDigitStr(date.minute)
  ++ "+02:00";
};
let getEventMarkup = (meetup: Types.meetupEvent) => {
  let startDate = dateTimestampFromDate(meetup.date);
  let endDate =
    dateTimestampFromDate({...meetup.date, hour: meetup.date.hour + 2});

  {
    "@context": "https://schema.org",
    "@type": "Event",
    "name": meetup.title,
    "startDate": startDate,
    "endDate": endDate,
    "eventAttendanceMode": "https://schema.org/OnlineEventAttendanceMode",
    "eventStatus": "https://schema.org/EventScheduled",
    "location": {
      "@type": "VirtualLocation",
      "url": "https://operaonline.stream5.com/",
    },
    "image": [||],
    "description": meetup.title,
    "performer":
      meetup
      ->Data.getParticipants
      ->Belt.Array.map(p =>
          {"@type": "Person", "name": p.name, "jobTitle": p.work}
        ),
    "organizer": [|
      {
        "@type": "Organization",
        "name": "Relay Meetup",
        "url": "https://relaymeetup.com",
      },
      {
        "@type": "Organization",
        "name": "Arizon Consulting",
        "url": "https://arizon.se",
      },
    |],
  };
};

[@react.component]
let make = (~meetup: Types.meetupEvent) => {
  <script
    type_="application/ld+json"
    dangerouslySetInnerHTML={
      "__html":
        meetup
        ->getEventMarkup
        ->Js.Json.stringifyAny
        ->Belt.Option.getWithDefault(""),
    }
  />;
};
