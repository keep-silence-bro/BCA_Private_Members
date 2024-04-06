import java.sql.*;
class updatequery
{
    public static void main(String[]args)
    {
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/21java","root","123456");
            Statement smt=con.createStatement();
            int count=smt.executeUpdate("delete from dbexample where rollno='12'");
            if(count>0)
            System.out.println("deleted successfully"+count);
            else
            System.out.println("not deleted");  
            con.close();  
        } 
        catch(Exception ex)
        {
            System.out.println(ex);
        }
    }


}