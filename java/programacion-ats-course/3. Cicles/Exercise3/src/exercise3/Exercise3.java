// Exercise 3: Read numbers until a 0 is entered. For each one indicate if it is even or odd.
package exercise3;

import javax.swing.JOptionPane;

public class Exercise3 {

    
    public static void main(String[] args) {
        int number;
        
        number = Integer.parseInt(JOptionPane.showInputDialog("Enter a number: "));
        
        while (number != 0) {
            // Verify the number and print with terany expresion.
            JOptionPane.showMessageDialog(null, "The number " + number + " is " + (((number % 2) == 0) ? "even" : "odd") + ".");
            // traditional normal if-else control structure.
            /*if ((number % 2) == 0) {
                JOptionPane.showMessageDialog(null, "The number " + number + " is even.");
            } else {
                JOptionPane.showMessageDialog(null, "The number " + number + " is odd.");
            }*/
            
            // Ask for other number.
            number = Integer.parseInt(JOptionPane.showInputDialog("Enter another number: "));
        }
        
    }
    
}
