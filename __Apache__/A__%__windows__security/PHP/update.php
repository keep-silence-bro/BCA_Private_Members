<?php
$con=mysqli_connect("localhost:3307","root","","zaid_db");
mysqli_query($con,"update student_report set rollno=152,fees=fees+2000,name='shaikh'");
mysqli_close($con);
?>