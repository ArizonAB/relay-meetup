[@react.component] [@bs.module]
external make:
  (
    ~source: string,
    ~className: string=?,
    ~linkTarget: [> | `_blank]=?,
    unit
  ) =>
  React.element =
  "react-markdown";
