// Exercise 7: Ask for three numbers and show them ordered from greatest to least.
package exercise7;

import javax.swing.JOptionPane;

public class Exercise7 {

    
    public static void main(String[] args) {
        int number1, number2, number3;
        
        number1 = Integer.parseInt(JOptionPane.showInputDialog("Enter the number 1: "));
        number2 = Integer.parseInt(JOptionPane.showInputDialog("Enter the number 2: "));
        number3 = Integer.parseInt(JOptionPane.showInputDialog("Enter the number 3: "));
        
        if ((number1 > number2) && (number2 > number3)) {
            JOptionPane.showMessageDialog(null, "The order is: " + number1 + ", " + number2 + ", " + number3);
        } else if ((number1 > number3) && (number3 > number2)) {
            JOptionPane.showMessageDialog(null, "The order is: " + number1 + ", " + number3 + ", " + number2);
        }
        else if ((number2 > number1) && (number1 > number3)) {
            JOptionPane.showMessageDialog(null, "The order is: " + number2 + ", " + number1 + ", " + number3);
        } else if ((number2 > number3) && (number3 > number1)) {
            JOptionPane.showMessageDialog(null, "The order is: " + number2 + ", " + number3 + ", " + number1);
        }
        else if ((number3 > number1) && (number1 > number2)) {
            JOptionPane.showMessageDialog(null, "The order is: " + number3 + ", " + number1 + ", " + number2);
        }
        else {
            JOptionPane.showMessageDialog(null, "The order is: " + number3 + ", " + number2 + ", " + number1);
        }
    }
    
}
