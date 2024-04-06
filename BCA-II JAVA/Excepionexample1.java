import java.lang.Throwable;
class Excepionexample1
{
public static void main(String[]args)
{
try
{
  int a= 10/0;
  System.out.println(a);
}
catch(ArithmeticException e)
{
System.out.println(e);

}
finally
{
System.out.println("Remaing code");
System.out.println("finally block always executed");
}
}


}