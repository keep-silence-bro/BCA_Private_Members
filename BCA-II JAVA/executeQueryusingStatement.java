import java.sql.*;
class executeQueryusingStatement
{
    public static void main(String[]abc)
    {
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/21java","root","123456");
          Statement smt=con.createStatement();
          ResultSet rs = smt.executeQuery("select *from dbexample");
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