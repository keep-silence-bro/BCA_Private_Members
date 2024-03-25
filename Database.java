import java.sql.*;
class Database{
	public static void main(String[]args)
	{
		try{
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:Mysql://localhost:3306/zaid_db","root","987654321");
			Statement st=con.createStatement();
			st.executeUpdate("Insert into j_152 values(2,18,300,85,'F') ");
			System.out.println("data successfully inserted");
			con.close();
		}
		catch(Exception ex){
			System.out.println("error"+ex);
		}
	}
}
