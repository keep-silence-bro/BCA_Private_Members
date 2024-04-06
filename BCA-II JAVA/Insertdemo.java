import java.sql.*;
public class Insertdemo
{
    public static void main(String args[])
   {

       try
    {
       Class.forName("com.mysql.cj.jdbc.Driver");
       Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/demo123","root","123456");
        Statement st=con.createStatement();
             st.executeUpdate("insert into stud values(101,'abc')");
           System.out.println("inserted success");
         con.close();
      }
    catch(Exception e)
   {
       System.out.println(e);
    }
   }
}