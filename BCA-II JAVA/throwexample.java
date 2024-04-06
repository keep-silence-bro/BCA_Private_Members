import java.lang.Throwable;
class throwexample
{
        public void validate(int age)
        {
          if(age<18)
          {
            throw new ArithmeticException("Person is not eligible");
          }
          else
          {
            System.out.println("Persoin is eligible");
          }

        }
        public static void main(String[]args)
    {
        throwexample obj = new throwexample();
        obj.validate(17);
        System.out.println("voting");
    }
}