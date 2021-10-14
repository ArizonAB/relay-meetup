module ReactStuff = {
  let s = ReasonReact.string
  let ate = ReasonReact.array
}

let linkStyle = "link"

let toTwoDigitStr = i =>
  switch i {
  | digit if digit < 10 => "0" ++ string_of_int(digit)
  | digit => digit->string_of_int
  }

let dateIsGreaterThan = (date1: Types.date, date2: Types.date) =>
  date1.year >= date2.year &&
    (date1.month >= date2.month || (date1.month == date2.month && date1.day >= date2.day))

let eventHasPassed = (date: Types.date) => {
  let rightNow = Js.Date.make()

  open Js.Date
  date.year >= rightNow->getFullYear->int_of_float &&
    (date.month >= rightNow->getMonth->int_of_float ||
      (date.month == rightNow->getMonth->int_of_float &&
        date.day >= rightNow->getDate->int_of_float))
}
