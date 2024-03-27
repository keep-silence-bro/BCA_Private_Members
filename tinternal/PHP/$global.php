<?php
$a=20;
$b=30;
function add()
{
$GLOBALS["z"]=$GLOBALS["x"]+$GLOBALS["y"];
}
add();
echo $z;
?>