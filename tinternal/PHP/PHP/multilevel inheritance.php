<?php
class A
{
function show()
{
echo "In class A";
}
}
class B extends A
{
function display()
{
echo "In class B";
}
}
class C extends B
{
function msg()
{
echo "In class c";
}
}
$obj=new C();
$obj->show();
$obj->display();
$obj->msg();
?>