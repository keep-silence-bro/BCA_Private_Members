import java.sql.*;
class dbExample2
{
public static void main(String[]args)
{
    try
    {
        //Register the driver
        Class.forName("com.mysql.cj.jdbc.Driver");
       
       //Get the Connection
       Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/21java","root","123456");
       
       //create Stament
     Statement st = con.createStatement();
   int count = st.executeUpdate("Update dbexample set name ='bca' where rollno='12' ");
if(count>0)
{
System.out.println("update data "+count);
}    
else
System.out.println("not successfully");

 con.close();
    }
    catch(Exception ex)
    {
        System.out.println(ex);
    }

}
}