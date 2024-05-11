<?php
session_start();
$_SESSION["uname"]="pqr";
$d=session_encode();
echo $d;
session_decode($d);
print_r($_SESSION);
?>