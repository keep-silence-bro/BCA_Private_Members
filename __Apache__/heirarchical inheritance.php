<?php
class A
{
 function showA()
{
echo "in class A";
}
}
class B extends A
{
 function showB()
{
echo "in class B";
}
}
class c extends B
{
function showC()
{
echo "In class C";
}
}
$obj=new B();
$obj->showA();
$obj->showB();
$ob=new c();
$ob->showA();
$ob->showC();
?>