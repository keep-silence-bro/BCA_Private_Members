import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
class DB 
{
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
			Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/zaid_db", "root", "987654321");
			Statement st=conn.createStatement();
			st.executeUpdate("Insert into j_152 values(23,25,250,70,'M') ");
			System.out.println("data successfully inserted");
			conn.close();


        } catch (Exception ex) {

        }
    }
}