// Exercise 2: Ask for two numbers and say which one is greater or if they are the same.
package exercise2;

import javax.swing.JOptionPane;

public class Exercise2 {

    
    public static void main(String[] args) {
        float number1, number2;
        
        // Ask for the numbers.
        number1 = Integer.parseInt(JOptionPane.showInputDialog("Enter the first number: "));
        number2 = Integer.parseInt(JOptionPane.showInputDialog("Enter the second number: "));
        
        // Check values.
        if (number1 == number2) {
            JOptionPane.showMessageDialog(null, "The numbers are the same");
        } else if (number1 > number2) {
            JOptionPane.showMessageDialog(null, "The first number [" + (int)(number1) + "] is the greatest");
        } else {
            JOptionPane.showMessageDialog(null, "The second number [" + (int)(number2) + "] is the greatest");
        }
        
    }
    
}
