<?php
fucntion show($n)
{
if($n==0)
{
throw new Exeption("wrong data");
}
return true;
}
try
{
show(0);
}
catch(Exeption $e)
{
echo $e->getMassage();
}
?>