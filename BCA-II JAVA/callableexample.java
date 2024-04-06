import java.sql.*;
class callableexample
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
     CallableStatement stmt = con.prepareCall("{call student()}");
    //stmt.setString(1,"abc");
    stmt.setInt(1,100);
    stmt.setString(2,"Solapur");

    stmt.execute();
    System.out.println("success");

     con.close();
    }
    catch(Exception ex)
    {
        System.out.println(ex);
    }

}
}












