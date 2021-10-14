type participant = {
  name: string,
  twitter: option<string>,
  github: string,
  handle: string,
  work: string,
}

type presentation = {
  presenter: participant,
  title: string,
  desc: string,
}

type discussion = {
  participants: array<participant>,
  topic: string,
  desc: string,
}

type interview = {
  subject: participant,
  interviewer: participant,
  topic: string,
  desc: string,
}

type content =
  | Presentation(presentation)
  | PanelDiscussion(discussion)
  | Q_A(discussion)
  | Showcase(discussion)
  | Interview(interview)

type date = {
  year: int,
  month: int,
  day: int,
  hour: int,
  minute: int,
}

type meetupEvent = {
  id: string,
  date: date,
  title: string,
  desc: string,
  meetupLink: option<string>,
  youtubeLink: option<string>,
  content: array<content>,
  hosts: array<participant>,
}
