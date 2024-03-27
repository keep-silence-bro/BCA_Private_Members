<?php 
session_start();
$_SESSION["color"]="pink";
echo $_SESSION["color"];
session_destroy();
$a=$_SESSION["color"];
echo $a."<br>";
session_unset();
?>