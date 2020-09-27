[@react.component]
let make = (~participant: Types.participant, ~text, ()) =>
  <a
    href={participant.github}
    className=Util.linkStyle
    target="_blank"
    rel="noreferer nofollow">
    {React.string(text)}
  </a>;
