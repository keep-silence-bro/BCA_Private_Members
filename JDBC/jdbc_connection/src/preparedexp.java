import java.sql.*;
class preparedexp 
{
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
			Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/zaid_db", "root", "987654321");
			PreparedStatement ps=conn.prepareStatement("select * from prepared_db");
            ps.executeQuery();
            ps.executeUpdate("insert into prepared_db values(152,'zaid',45,50,40,42,48,400)");
            System.out.println("data inserted successfully");
            ResultSet rs=ps.executeQuery();
        while(rs.next())
        {
            System.err.println("Set of data is: ");
			System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3)+" "+rs.getInt(4)+" "+rs.getInt(5)+" "+rs.getInt(6)+" "+rs.getInt(7)+" "+rs.getInt(8));
        }
            conn.close();
        } 
        catch (Exception ex) 
        {

        }
    }
}
