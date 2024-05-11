<?php
$con=mysqli_connect("localhost:3307","root","","zaid_db");
mysqli_query($con,"delete from student_report where rollno=1");
mysqli_close($con);
?>