<?hh
/* Prototype  : int idate(string format [, int timestamp])
 * Description: Format a local time/date as integer
 * Source code: ext/date/php_date.c
 * Alias to functions:
 */
<<__EntryPoint>> function main(): void {
echo "*** Testing idate() : usage variation ***\n";

// Initialise function arguments not being substituted (if any)
date_default_timezone_set("Asia/Calcutta");

//array of values to iterate over
$inputs = dict[

      'Day of the month' => 'd',
      'Leap Year' =>'L',
      'Month number' => 'm',
      'Days in the month' => 't',
      'Day of the week' => 'w',
      'ISO-8601 week number' => 'W',
      'Year (1 or 2 digits)' => 'y',
      'Year 4 digits' => 'Y',
      'Day of the year' => 'z',
];

// loop through each element of the array for timestamp
foreach($inputs as $key =>$value) {
      echo "\n--$key--\n";
      var_dump( idate($value) );
};
echo "===DONE===\n";
}
