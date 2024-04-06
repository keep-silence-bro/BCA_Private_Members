import java.awt.*;
import javax.swing.*;
class Borderlayoutexample
{
JFrame form;
Borderlayoutexample()
{
   form =new JFrame();
form.setLayout(new BorderLayout(20,15));


   JButton b1=new JButton("NORTH");
JButton b2= new JButton("SOUTH");
JButton b3=new JButton("EAST");
JButton b4= new JButton("WEST");
JButton b5= new JButton("CENTER");
form.add(b1,BorderLayout.NORTH);
form.add(b2,BorderLayout.SOUTH);
form.add(b3,BorderLayout.EAST);
form.add(b4,BorderLayout.WEST);
form.add(b5,BorderLayout.CENTER);

form.setSize(400,400);
form.setVisible(true);


}


}

class layoutManager
{
public static void main(String[] args)
{
Borderlayoutexample obj = new Borderlayoutexample ();
}


}