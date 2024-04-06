import java.awt.*;
import javax.swing.*;
class Gridlayoutexample
{
  JFrame form ;
  Gridlayoutexample()
  {
    form = new JFrame();
     JButton b1= new JButton("Bca");
     JButton b2= new JButton("Bcs");
     JButton b3= new JButton("Bsc");
     JButton b4= new JButton("BA");
      form.add(b1);
      form.add(b2);
       form.add(b3);
      form.add(b4);
      form.setLayout(new GridLayout(2,2,20,25));
      form.setSize(400,400);
      form.setVisible(true);
  }
 public static void main(String[]args)
 {

    Gridlayoutexample obj = new Gridlayoutexample();
 }
}