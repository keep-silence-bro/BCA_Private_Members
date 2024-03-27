<?php
class student
{
function S_name()
{
echo "student name is ="."<br>"." ABC"."<br>";
}
}
class college extends student
{
function C_name()
{
echo "college name is ="."<br>"." sangameshwar college";
}
}
$obj=new college();
$obj->S_name();
$obj->C_name();
?>