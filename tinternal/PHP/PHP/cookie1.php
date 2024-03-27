
<html>
<body bgcolor="pink">
<?php 
session_start();
$a="bca";
$b="php";
setcookie($a,$b);
echo $_COOKIE[$a];
?>
</body>
</html>
