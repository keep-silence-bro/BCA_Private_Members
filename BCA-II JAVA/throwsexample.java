import java.lang.Throwable;
import java.io.*;
class ThrowsExample
{

void method() throws IOException
{
  System.out.println("Input output Exceptio0n");
}

}

 class ExceptionExample01
{
public static void main(String[]args) throws Exception
{
    
        ThrowsExample obj= new ThrowsExample();
        obj.method();
        System.out.println("Exception handled");
        
}
}