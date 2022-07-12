<?hh
<<__EntryPoint>> function main(): void {
$db = new PDO('sqlite::memory:');

$db->beginTransaction();

$db->query('CREATE TABLE IF NOT EXISTS foobar (id INT AUTO INCREMENT, name TEXT)');
$db->commit();

$db->beginTransaction();
$db->query('INSERT INTO foobar VALUES (NULL, "PHP")');
$db->query('INSERT INTO foobar VALUES (NULL, "PHP6")');
$db->rollBack();

$r = $db->query('SELECT COUNT(*) FROM foobar');
var_dump($r->rowCount());


$db->query('DROP TABLE foobar');
}
