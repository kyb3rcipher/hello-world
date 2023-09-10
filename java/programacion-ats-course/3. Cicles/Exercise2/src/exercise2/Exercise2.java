// Exercise 2: Read a number and indicate if it is positive or negative. The process will repeat until a 0 is entered.
package exercise2;

import javax.swing.JOptionPane;

public class Exercise2 {

    
    public static void main(String[] args) {
        int number;
        
        number = Integer.parseInt(JOptionPane.showInputDialog("Enter a number: "));
        
        while (number != 0) {
            
            // Check the number status.
            if (number > 0) {
                JOptionPane.showMessageDialog(null, "The number " + number + " is posive.");
            } else if (number == 0) {
                JOptionPane.showMessageDialog(null, "The number " + number + "is zero.");
            } else {
                JOptionPane.showMessageDialog(null, "The number" + number + " is negative.");
            }
            
            // Ask again for the number.
            number = Integer.parseInt(JOptionPane.showInputDialog("Enter another number: "));
        }
        
    }
    
}
