import java.awt.*;    
import java.awt.event.WindowEvent;    
import java.awt.event.WindowListener;   
  
// class which inherits Frame class and implements WindowListener interface   


public class WindowExample extends Frame implements WindowListener {    
  
// class constructor  

    WindowExample() {   
  
    // adding WindowListener to the frame 
  
        addWindowListener(this);   

        // setting the size, layout and visibility of frame        
        setSize (400, 400);    
        setLayout (null);    
        setVisible (true);    
    }   
// main method  
public static void main(String[] args) {    
    new WindowExample();    
}    
  

public void windowActivated (WindowEvent arg0) {    
    System.out.println("activated");    
}    
  

public void windowClosed (WindowEvent arg0) {    
    System.out.println("closed");    
}    
  

public void windowClosing (WindowEvent arg0) {    
    System.out.println("closing");    
    dispose();    
}    
  

public void windowDeactivated (WindowEvent arg0) {    
    System.out.println("deactivated");    
}    
  

public void windowDeiconified (WindowEvent arg0) {    
    System.out.println("deiconified");    
}    
  

public void windowIconified(WindowEvent arg0) {    
    System.out.println("iconified");    
}    
  

public void windowOpened(WindowEvent arg0) {    
    System.out.println("opened");    
}    
}    