<?php
session_start();
$a= $_SESSION["student name"];
$b= $_SESSION["student roll no"];
$c= $_SESSION["student age"];
print_r($a."<br>".$b."<br>"."<br>".$c);
?>