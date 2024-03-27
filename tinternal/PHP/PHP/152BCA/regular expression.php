<?php
$s="rain in spain";
$p="/ain"/i;
echo preg_match_all($p,$s);
?>
<?php
$s="rain is spain";
$p1="spain";
$p2="/ain"/i;
echo preg_replace($p,$s);
?>
<?php
$s="welcome to our college";
$p="/^[a-z]/";
echo preg_match($p,$s);
?>
<?php
$s="welcome to our college";
$p="/^[a-z][0-9]$/";
echo preg_match($p,$s);
?>
<?php
$s="123";
$p="/^[0-9]{1,4}/";
echo preg_match($p,$s);
?>
<?php
class color
{
function showcolor()
{
echo "color is red";
}
}
$c=new color();
$c->showcolor();
?>
<?php
class name
{
var $name;
function show($a)
{
$this->fruit=$a;
echo $fruit;
}
}
$obj=new fruit();
obj->show ("orange");
?>
<?php
class demo
{
var $no1,$no2;
function add($no1,$no2)
{
$this->no1=$a;
$this->no2=$b;
$c=$a+$b;
echo $c;
}
}
$obj=new demo();
$obj->add(2,3);
?>
<?php
class demo
{
const pi=3.14;
const r=4;
}
echo demo::pi;
echo demo::r;
?>
<?php
class demo
{
const no1=2;
const r=3;
}
echo add::no1+add::no2;
?>
<?php
class add
{
public static function add($a,$b)
{
echo $a+$b;
}
}
$demo::add(2,3);
?>
<?php
class A
{
funtion show()
{
echo "In class A";
}
}
class B extends A
{
funtion display()
{
echo "In class B";
}
}
$obj=new B();
$obj->show ();
$obj->display();
?>
<?php
class A
{
funtion show()
{
echo "In class A";
}
}
class B extends A
{
funtion display()
{
echo "In class B";
}
}
class c extends B
{
function show1()
{
echo "In class c";
}
}
$obj=new c();
$obj->show ();
$obj->display();
$obj->show1();
?>
<?php
class demo
{
static $i=123;
public static function show()
{
echo self::$i*self::$i;
}
}
demo ::show();
?>
<?php
abstract class A
{
abstract function display();
function show()
{
echo "In class A";
}
}
class B extends A
{
function display()
{
echo "In class A";
}
function set()
{
echo "In class B";
}
}
$ob=new B();
$ob->show();
$ob->display();
$ob->set();
?>
<?php
abstract class A
{
abstract function show();
}
abstract class B extends A
{
abstract function show();
}
class c extends B
{
function show()
{
echo "In show function";
}
}
$obj=new c();
$obj->show ();

?>
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
<?php
class A
{
function show($a,$b)
{
$a=12;
$b=10;
echo $c=$a+$b;
}
}
class B extends A
{
function showb($a,$b)
{
$a=3;
$b=4;
echo $d=$a+$b;
}
}
$ob=new A();
$ob->show();
$obj=new B();
$obj->showb();
?><?php
class A
{
function show($a,$b)
{
$a=12;
$b=10;
echo $c=$a+$b;
}
}
class B extends A
{
function showb($a,$b)
{
$a=3;
$b=4;
echo $d=$a+$b;
}
}
$ob=new A();
$ob->show();
$obj=new B();
$obj->showb();
?>
<?php
class A
{
function show($a,$b)
{

echo "in class A";
}
}
class B extends A
{
function showb($a,$b)
{
echo "in class b";
}
}
$ob=new A();
$ob->show();
$obj=new B();
$obj->showb();
?>
<?php
interface demo
{
function setdata();
}
class main implements demo
{
function setdata()
{
echo "hellobca3";
}
}
$ob=new main();
$ob->setdata();
?>






