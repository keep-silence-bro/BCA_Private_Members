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