<?hh <<__EntryPoint>> function main(): void {
$dest = sys_get_temp_dir().'/'.'36697.gif';

$im = imagecreatetruecolor(192, 36);
$trans_color = imagecolorallocate($im, 255, 0, 0);
$color = imagecolorallocate($im, 255, 255, 255);
imagecolortransparent($im, $trans_color);
imagefilledrectangle($im, 0,0, 192,36, $trans_color);
$c = imagecolorat($im, 191,35);
imagegif($im, $dest);
imagedestroy($im);
$im = imagecreatefromgif($dest);
$c = imagecolorat($im, 191, 35);
$colors = imagecolorsforindex($im, $c);
echo $colors['red'] . ' ' . $colors['green'] . ' ' . $colors['blue'];
unlink($dest);
}
