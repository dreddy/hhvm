//// modules.php
<?hh
new module a {}     // package pkg1
//// a.php
<?hh

module a;
class A {
  <<__CrossPackage("pkg2")>>
  public function test() : void {
  }
}
function test(): void {
  $x = new A();
  $x->test(); // error
}
