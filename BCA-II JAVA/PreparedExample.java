import java.sql.*;
class PreparedExample
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
     PreparedStatement st = con.prepareStatement("Select *from stud123");
     
     //st.setString(1,"BCA=II");
     
     ResultSet  rs = st.executeQuery();
     while(rs.next())
     {
        System.out.println(rs.getInt(1)+" "+rs.getString(2));  
     }
     con.close();
    }
    catch(Exception ex)
    {
        System.out.println(ex);
    }

}
}