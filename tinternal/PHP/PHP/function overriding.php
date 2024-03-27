<?php
class A
{
function showA()
{
echo "In class A";
}
}
class B extends A
{
function showB()
{
echo "In class B";
}
}
$obj=new A();
$obj->showA();
$ob=new B();
$ob->showB();
?>