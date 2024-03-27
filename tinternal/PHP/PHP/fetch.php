<?php
$c=0;
$con=mysqli_connect("localhost:3307","root","","zaid_db");
$rs=mysqli_query($con,"select *from student_report");
while($a=mysqli_fetch_array($rs))
{
echo $a[0]."  ".$a[1]."  ".$a[2]."<br>";
$c=$c+1;
}
echo $c;
mysqli_close($con);
?>