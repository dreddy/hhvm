<?hh

function f(): void {
  $b = true;
  $d = dict[];
  while ($b) {
    $d['a'] = true;
    inspect($d);
    break;
    $d['b'] = 42;
    inspect($d);
  }
  $d['c'] = 42.0;
  inspect($d);
}

function inspect(mixed $_): void {}
