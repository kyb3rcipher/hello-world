// Exercise 21: Ask for 10 numbers, and show at the end if any negative has been entered.
package exercise21;

import javax.swing.JOptionPane;

public class Exercise21 {

    
    public static void main(String[] args) {
        boolean negativesNumbers = false;
        
        for (int i = 0; i < 10; i++) {
            float number;
            
            number = Float.parseFloat(JOptionPane.showInputDialog((i + 1) + ".-  Enter a number: "));
            
            negativesNumbers = (number < 0); // if detect negative number change the value of true.
        }
        
        JOptionPane.showMessageDialog(null, ((negativesNumbers) ? "Yes" : "Nope") + ", there were negative numbers.");
    }
    
}
