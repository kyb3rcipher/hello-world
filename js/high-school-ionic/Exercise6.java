// Exercise 6: Make a program that takes 2 numbers and say if they are both even or odd.
package exercise6;

import javax.swing.JOptionPane;

public class Exercise6 {

    
    public static void main(String[] args) {
        int number1, number2;
        
        number1 = Integer.parseInt(JOptionPane.showInputDialog("Enter the number 1: "));
        number2 = Integer.parseInt(JOptionPane.showInputDialog("Enter the number 2: "));
        
        if ( ((number1 % 2) == 0) && ((number2 % 2) == 0)) {
            JOptionPane.showMessageDialog(null, "Both numbers are even.");
        } else if ( ((number1 % 2) == 0) || ((number2 % 2) == 0)) {
            JOptionPane.showMessageDialog(null, "One of that number is a even.");
        } else {
            JOptionPane.showMessageDialog(null, "The numbers are odd.");
        }
    }
    
}
