<?hh

function f(dict<string, int> $d): void {
  $d = dict[];
  $d['k'] = 42;
  inspect($d);
}

function inspect(mixed $_): void {}
