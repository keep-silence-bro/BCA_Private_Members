<?php
$con=mysqli_connect("localhost:3307","root","","zaid_db");
mysqli_query($con,"insert into student_report value(152,'zaid',10000)");
mysqli_close($con);
?>