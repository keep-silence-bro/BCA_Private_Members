<?php
echo"hello";
?>
/*<html>
<body bgcolor="pink">
<?php
echo"<b>hello";
?>*/
<?php
echo"hello"."<br>how are you?";
?>
<?php
$a=3;

$b=4;
$c=$a+$b;
echo $c;
?>
<?php
$a=3;
echo $a;
echo var_dump($a);
?>
<?php
$no=3.14;
echo $no;
echo var_dump($no);
?>
<?php
$str1="good morning";
$str2="BCA-2";
echo var_dump($str1);
echo var_dump($str2);
?>
<?php
$str1="good morning";
$str1=NULL;
echo var_dump($str1);
?>
<?php
$a=array(10,20,30);
echo $a[0];
echo var_dump($a);
?>
<?php
$z=array("solapur","akkalkot","thane","satar");
echo $z;
echo var_dump($z);
?>
<?php
define("z","91");
echo Z;
define("a","152","true");
echo A;
?>
<?php
const pri=3.14;
echo pi;
?>
<?php
define("pi","3.14");
$area=pi*3*3;
echo $area;
?>
<?php
$x=2;
$y=3;
echo "<br>"$x+$y;
echo "<br>"$x-$y;
echo "<br>"$x*$y;
echo "<br>"$x/$y;
echo "<br>"$x**$y;
?>
<?php
$a=5;
$b=10;
echo $a=$b;
echo $a+=$b;
echo $a-=$b;
echo $a*=$b;
echo $a/%$b;
echo $a%=$b;
echo $a**=$b;
?>
<?php
$a=2;
$b=2.0;
$c=2.0;
echo $a==5;
echo $b<=5;
echo $b===$c;
echo $c>=$b;
echo $a<$b;
echo $a!=$b;
echo $a<>$b;
?>
<?php
$x=5;
$y=6;
echo $x++;
echo ++$x;
echo $y--;
echo --$y;
?>
<?php
$a=10;
$b=30;
echo($a<$b)&&($a>$b);
echo($a<$b)||($a>$b);
echo($a!=$b);
?>
<?php
$x="hello";
$y="bca2";
echo $x.$y;
echo $x.=$y;
echo $x;
?>
<?php
$a=12;
$b=$a<9?3:14;
echo $b;
?>
<?php
function addnum($a,$b)
{
$c=$a+$b;
echo $c;
}
addnum(2,3);
?>
<?php
function printname($fname,$mname,$lname)
{
echo $fname." ."$mname." ".$lname;
}
printname("abc","pqr","xyz"); 
?>
<?php
function printreturn($a,$b);
{
$c=$a+$b;
return $c;
}
echo printreturn(2,3);
?>
<?php
function customer($fname,$mname,$lname)
{
return $fname.$mname.$lname;
}
customer ("abc","pqr","xyz");
?>
<?php
function sqr($num)
{
echo $num*$num;
}
sqr(3);
?>
<?php
function sqr(&$fname)
{
$fname="xyz";
echo $fname;
}
$x="pqr";
fun($x);
echo $x;
?>
<?php
$a=5;
if($a<10)
{
echo "single digit number";
}
?>
<?php
$b=5;
if($b<0)
echo "number is positive";
else
{
echo "number is negative";
}
?>
<?php
$age=13;
if($age<13)
{
echo "your age not eligible";
}
else
if($age<20)
{
echo "your age is under teenage";
}
else
if($age>30)
{
echo "you are adult";
}
?>
<?php
$x=10;
switch($x)
{
case 10:
echo "number is 10";
break;
case 20:
echo "number is 20";
break;
default:
echo "invalid number";
}
?>
<?php
$ch='u';
swithc($ch)
{
case 'a':
echo "charcater is vowel";
break;
case 'u':
echo "character is vowel";
break;
case 'i':
echo "character is vowel";
break;
case 'o':
echo "character is vowel";
break;
case 'e':
echo "character is vowel";
break;
?>
<?php
$num=5;
for($i=0;$i<$num;$i++)
{
echo $i;
?>
<?php
$i=0;
while($i<=5)
{
echo "<b>".i."<br>";
$i++;
?>
<?php
$i=0;
do
{
echo $i."<br>";
$i++;
}while($i<5);
?>
<?php
echo chr(52);
?>
<?php
$str="hello";
echo strtoupper($str);
?>
<?php
$str="HELLO";
echo strtolower($str);
?>
<?php
$str="hello";
echo strrev($str);
?>
<?php
$str="Hello";
echo strleng($str);
?>
<?php
$str="Wel come";
echo substr($str,3);
?>
<?php
$str1="hello";
$str2="hello";
echo strcmp($str1,$str2);
?>
<?php
$str="welcome";
echo trim($str);
?>
<?php
$str="bca";
$txt=sprintf("hello %s",$str);
echo $txt;
?>
<?php
$str="hello class";
$str=str_split($str);
print_r($str);
?>
<?php
$arr=array("red","green","blue");
$str=str_join(" ",$arr);
echo $str;
?>
<?php
$str="hello class";
echo str_replace("class","bca2",$str);
?>
<?php
$arr=array("a","b","c");
print_r($arr);
?>
<?php
$a=array("red","green","blue");
array_push($a,"pink","yellow");
print_r($c);
?>
<?php
$a=array("red","green","blue");
array_pop($a);
print_r($a);
?>
<?php
$a=array(1,2,3);
$b=array(4,5,6);
$c=array_merge($a,$b);
print_r($c);
?>
<?php
$a=array(2,4,6);
echo array_sum($a);
echo "sum is".array_sum($a);
?>
<?php
$a=array("abc");
print_r(array_reverse($a));
?>
<?php
$a=array(10,20,30);
print_r(sort($a));
?>
<?php
$a=array("abc","pqr","xyz");
print_r(rsort($a));
?>
<?php
$a=array(2,4,6,8);
echo count($a);
?>
<?php
$a=array("fname"=>"abc","mname"=>"pqr","lname"=>"xyz");
echo $a["fname"]."<br>".$a["mname"]."<br>".$a["lname"];
?>
<?php
$a=array(array(1,"abc"),array(2,"pqr"));
for($i=0;$i<2;$i++)
{
for($j=0;$j<2;$j++)
{
echo $a[$i][$j];
echo "<br>";
?>
<?php
$a=array(array(2,4),array(3,5));
for($i=0;$i<2;$i++)
{
for($j=0;$j<2;$j++)
{
$sum=$sum+$a[$i][$j];
}
}
echo "sum is=",$sum;
?>
<?php
$a="i am from solapur";
$b="/soalpur/i";
echo preg_match($b,$a);
?>






















