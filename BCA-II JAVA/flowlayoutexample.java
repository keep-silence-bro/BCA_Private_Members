import java.awt.*;
import javax.swing.*;

class flowlayoutexample
{

JFrame form;
flowlayoutexample()
{

form = new JFrame();
JButton b1= new JButton("add");
JButton b2= new JButton("sub");
JButton b3= new JButton("Mul");
JButton b4= new JButton("div");
JButton b5= new JButton("mod");
JButton b6= new JButton("per");

form.add(b1);
form.add(b2);
form.add(b3);
form.add(b4);
form.add(b5);
form.add(b6);

form.setLayout(new FlowLayout(FlowLayout.LEFT,20,25));
form.setVisible(true);
form.setSize(400,400);
}

public static void main(String[]args)
{
flowlayoutexample obj = new flowlayoutexample();
}
}
