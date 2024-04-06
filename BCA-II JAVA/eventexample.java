import java.awt.*;
import java .awt.event.*;
public class eventexample extends Frame implements ActionListener
{
TextField tf;
Button b;
eventexample()
{
tf=new TextField();
tf.setBounds(60,50,170,20);
 b=new Button("click me");
b.setBounds(100,120,80,30);
b.addActionListener(this);
add(b);
add(tf);

setSize(400,400);
setLayout(null);
setVisible(true);
}
public void actionPerformed(ActionEvent obj)
{
tf.setText("welcome");
}
public static void main(String[] args)
{
 eventexample obg =new eventexample();
}
}