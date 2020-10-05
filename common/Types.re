type participant = {
  name: string,
  twitter: option(string),
  github: string,
  handle: string,
  work: string,
};

type presentation = {
  presenter: participant,
  title: string,
  desc: string,
  atTime: string,
};

type panelDiscussion = {
  participants: array(participant),
  topic: string,
  desc: string,
};

type interview = {
  subject: participant,
  interviewer: participant,
  topic: string,
  desc: string,
};

type content =
  | Presentation(presentation)
  | PanelDiscussion(panelDiscussion)
  | Interview(interview);

type date = {
  year: int,
  month: int,
  day: int,
  hour: int,
  minute: int,
};

type meetupEvent = {
  id: string,
  date,
  title: string,
  desc: string,
  meetupLink: option(string),
  content: array(content),
  hosts: array(participant),
};
