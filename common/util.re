module ReactStuff = {
  let s = ReasonReact.string;
  let ate = ReasonReact.array;
};

let linkStyle = "link";

let toTwoDigitStr = i =>
  switch (i) {
  | digit when digit < 10 => "0" ++ string_of_int(digit)
  | digit => digit->string_of_int
  };

let eventHasPassed = (date: Types.date) => {
  let rightNow = Js.Date.make();

  Js.Date.(
    date.year >= rightNow->getFullYear->int_of_float
    && (
      date.month >= rightNow->getMonth->int_of_float
      || date.month == rightNow->getMonth->int_of_float
      && date.day >= rightNow->getDate->int_of_float
    )
  );
};
