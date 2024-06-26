<?hh
/* Prototype  : mixed array_sum(array $input)
 * Description: Returns the sum of the array entries 
 * Source code: ext/standard/array.c
*/

/*
 * sum of array containing different float values
*/
<<__EntryPoint>> function main(): void {
echo "*** Testing array_sum() : array with different float values ***\n";

// Simple float array
$float_input = vec[ 1.1, 2.3, 0.0, 0.5, -2.3, -0.8, .5];
echo "-- simple float array --\n";
var_dump( array_sum($float_input) );

// float array with scientific notations
$float_input = vec[ 1.2e2, 23.4e3, -4.1e2, 0.2e2, 2.1e-2, .5e3];
echo "-- float array with scientific notations e and E --\n";
var_dump( array_sum($float_input) );
$float_input = vec[ 1.2E2, 23.4E3, -4.1E2, 0.2E2, 2.1E-2, .5E3];
var_dump( array_sum($float_input) );

// Mixed float array
$float_input = vec[ 
  1.2,
  0.5
  -5.8,
  6.334,
  -0.65,
  1.2e3,
  -2.3e2,
  5.56E3,
  -3.82E-2
];
echo "-- Mixed float array --\n";
var_dump( array_sum($float_input) );
                     
echo "Done";
}
