<?hh <<__EntryPoint>> function main(): void {
$cwd = dirname(__FILE__);
$font = "$cwd/Tuffy.ttf";
$image = imagecreatetruecolor(50, 50);
$color = imagecolorallocate($image, 255, 255, 255);
foreach (vec["E", "I", "P", "g", "i", "q"] as $c)
{
    $x = imagettftext($image, 32, 0, 0, 0, $color, $font, $c);
    $y = imagettfbbox(32.0, 0.0, "$cwd/Tuffy.ttf", $c);
    if ( abs($x[0] - $y[0]) > 1
      || abs($x[2] - $y[2]) > 1
      || abs($x[4] - $y[4]) > 1
      || abs($x[6] - $y[6]) > 1 ) {
      echo "FAILED: \n";
      var_dump($x);
      var_dump($y);
      exit;
    }
}
echo 'OK';
}
