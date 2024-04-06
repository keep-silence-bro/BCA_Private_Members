import java.sql.*;
class preparedexample01
{
    public static void main(String[]args)
    {
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/21java","root","123456");
            PreparedStatement smt = con.prepareStatement("select *from stud123");
             ResultSet rs =smt.executeQuery();

           while(rs.next())
           {
            System.out.println(rs.getInt(1)+" "+rs.getString(2));
           }


    
           con.close();



        }
        catch(Exception ex){
        System.out.println(ex);
        }
    }
}





TYPE SCROLL_INSENSITIVE OR TYOE _SCROLL_SENSITIVE









