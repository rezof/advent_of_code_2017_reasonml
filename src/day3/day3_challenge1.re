let test1 = 1;

let test2 = 12;

let test3 = 23;

let test4 = 1024;

let puzzle = 312051;

let steps_to_one_from = n => {
  let rec next_perfect_square_root = i : int => {
    let sr = int_of_float(sqrt(float_of_int(i)));
    sr * sr === i ? i : next_perfect_square_root(i + 1);
  };
  let next_perfect_root =
    int_of_float(sqrt(float_of_int(next_perfect_square_root(n))));
  let level_steps = floor(float_of_int(next_perfect_root / 2));
  let side_steps =
    next_perfect_root
    / 2
    - (next_perfect_root * next_perfect_root - n + 1)
    mod next_perfect_root;
  int_of_float(level_steps) + abs(side_steps);
};

Js.log(steps_to_one_from(test1));

Js.log(steps_to_one_from(test2));

Js.log(steps_to_one_from(test3));

Js.log(steps_to_one_from(test4));

Js.log(steps_to_one_from(puzzle));