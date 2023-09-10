// Exercise 1: Make a program that reads an integer and shows if the number is a multiple of 10.
package exercise1;

import javax.swing.JOptionPane;

public class Exercise1 {

    
    public static void main(String[] args) {
        int number;
        
        number = Integer.parseInt(JOptionPane.showInputDialog("Enter a number: "));
        
        if ((number % 10) ==  0) {
            JOptionPane.showMessageDialog(null, "The number is multiple of 10");
        } else {
            JOptionPane.showMessageDialog(null, "The number not is a multiple of 10");
        }
        
    }
    
}
