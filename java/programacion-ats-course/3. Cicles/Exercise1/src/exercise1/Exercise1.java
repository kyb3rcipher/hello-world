// Exercise 1: Read a number and show its square, repeat the process until a negative number is entered.
package exercise1;

import javax.swing.JOptionPane;

public class Exercise1 {

    
    public static void main(String[] args) {
        float number;
        int square;
        
        number = Float.parseFloat(JOptionPane.showInputDialog("Enter a number: "));
        
        while (number >= 0) {
            square = (int)(Math.pow(number, 2));
            JOptionPane.showMessageDialog(null, square);
            
            // Ask again for the number.
            number = Float.parseFloat(JOptionPane.showInputDialog("Enter another number: "));
        }
        
    }
    
}
