import java.lang.Throwable;
class InvalideAgeException extends Exception
{
 public InvalideAgeException(String str)
 {
    super(str);
 }
}

public class customException
{
   static void validate(int age) throws  InvalideAgeException
    {
        if(age < 18)
        {
            throw new InvalideAgeException("You are not eligible for voting");
        }
        else
        {
            System.out.println("Welcome for voting");
        }

        
    }
    public static void main(String[]args)

    {
        try
        {
            validate(130);
        }
        catch(InvalideAgeException obj)
        {
            System.out.println(obj);
        }
    }
}