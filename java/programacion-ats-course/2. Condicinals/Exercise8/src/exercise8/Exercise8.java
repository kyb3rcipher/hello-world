// Exercise 8: Ask for a number between 0 and 99 99 and say how many digits it has.
package exercise8;

import javax.swing.JOptionPane;

public class Exercise8 {

    
    public static void main(String[] args) {
        int number;
        
        // Ask the number.
        number = Integer.parseInt(JOptionPane.showInputDialog("Enter a number <0-99 999>: "));
        
        // Check the digits number.
        if (number >= 0 && number < 10) {
            JOptionPane.showMessageDialog(null, "The number of digits in [" + number + "] is: One.");
        } else if (number >= 10 && number < 100) {
            JOptionPane.showMessageDialog(null, "The number of digits in [" + number + "] is: Two.");
        } else if (number >= 100 && number < 1000) {
            JOptionPane.showMessageDialog(null, "The number of digits in [" + number + "] is: Three.");
        } else if (number >= 1000 && number < 99999) {
            JOptionPane.showMessageDialog(null, "The number of digits in [" + number + "] is: Four.");
        } else if (number >= 99999) {
            JOptionPane.showMessageDialog(null, "The number of digits in [" + number + "] is: Five.");
        } else {
            JOptionPane.showMessageDialog(null, "The entered number not is valid.");
        }
        
    }
    
}
