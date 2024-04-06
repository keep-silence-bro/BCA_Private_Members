import java.awt.*;    
import java.awt.event.*;    
public class CheckboxExample2  
{    
 
     CheckboxExample2() {    

        Frame f = new Frame ("CheckBox Example");    

        final Label lb1 = new Label();             
   lb1.setAlignment(lb1.CENTER);    
        lb1.setSize(400,100);    
// creating the checkboxes  
        Checkbox cb1= new Checkbox("C++");    
    cb1.setBounds(100, 100,  50, 50);    
        Checkbox cb2= new Checkbox("Java");    
        cb2.setBounds(100, 150,  50, 50);    
// adding the checkbox to frame  
f.add(cb1);  
f.add(cb2);   
f.add(lb1);    
  
// adding event to the checkboxes  
        cb1.addItemListener(new ItemListener() {    
             public void itemStateChanged(ItemEvent e) {                 
                lb1.setText("C++ Checkbox: "     
                + (e.getStateChange()==1?"checked":"unchecked"));    
             }    
          });    
        cb2.addItemListener(new ItemListener() {    
             public void itemStateChanged(ItemEvent e) {                 
                lb1.setText("Java Checkbox: "     
                + (e.getStateChange()==1?"checked":"unchecked"));    
             }    
          });    
// setting size, layout and visibility of frame  
        f.setSize(400,400);    
        f.setLayout(null);    
        f.setVisible(true);    
     }    
// main method  
public static void main(String args[])    
{    
    new CheckboxExample2();    
}    
}    