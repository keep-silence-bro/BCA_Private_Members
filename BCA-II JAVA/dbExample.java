import java.sql.*;
class executeExample
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
     String createTable="CREATE TABLE bcaII( "
         + "Name VARCHAR(255), "
         + "Salary INT NOT NULL, "
         + "Location VARCHAR(255))";
     boolean bo = st.execute(createTable);
     System.out.println(bo);
     con.close();
    }
    catch(Exception ex)
    {
        System.out.println(ex);
    }

}
