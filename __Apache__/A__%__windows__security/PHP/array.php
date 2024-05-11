<?php
$a=array(array(2,4),array(3,5));
for($i=0;$i<2;$i++)
{
for($j=0;$j<2;$j++)
{
$sum=0;
$sum=$sum+$a[$i][$j];
}
}
echo "sum is=",$sum;
?>