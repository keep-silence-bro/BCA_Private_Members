import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
class DB 
{
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
			Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/zaid_db", "root", "987654321");
			PreparedStatement st=conn.prepareStatement("select * from prepared_db");
            st.executeUpdate("insert into prepared_db values(152,'zaid',45,50,40,42,48,400)");
            ResultSet rs=st.executeQuery();
			
			System.out.println(" inserted successfully");
            while(rs)
            conn.close();

        } catch (Exception ex) {

        }
    }
}