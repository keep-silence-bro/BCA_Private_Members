<?php
final class A
{
function show()
{
echo "hello";
}
}
class B extends A
{
function msgshow()
{
echo "bye";
}
}

$obj=new B();
$obj->show ();
$obj->msgshow();
?>