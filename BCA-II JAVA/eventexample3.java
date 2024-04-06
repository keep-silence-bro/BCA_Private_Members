import java.awt.event.*;
import java.awt.*;
public class eventexample3 extends Frame implements ActionListener
{
TextField tf1,tf2,tf3;
Button b1,b2;
Label lb1,lb2,lb3;
eventexample3()
{

lb1= new Label("Enter first number ");
lb2 = new Label("Enter second number");
lb3=new Label("Result");
tf1=new TextField();
tf2= new TextField();
tf3=new TextField();
b1= new Button("+");
b2= new Button("-");
this.setLayout(new FlowLayout());
this.add(lb1);
this.add(tf1);
this.add(lb2);
this.add(tf2);
this.add(lb3);
this.add(tf3);
this.add(b1);
this.add(b2);
b1.addActionListener(this);
b2.addActionListener(this);

this.setVisible(true);
this.setSize(700,600);
}
public void actionPerformed(ActionEvent e)
{
	if(e.getSource()==b1)
 	{
	  int a,b,c;
	a= Integer.parseInt(tf1.getText());
	b= Integer.parseInt(tf2.getText());
	c=a+b;
	String res = String.valueOf(c);
	tf3.setText(res);			
	}
if(e.getSource()==b2)
 	{
	  int a,b,c;
	a= Integer.parseInt(tf1.getText());
	b= Integer.parseInt(tf2.getText());
	c=a-b;
	String res = String.valueOf(c);
	tf3.setText(res);			
	}
}
public static void main(String [] args)
{
 new eventexample3();
}

}















