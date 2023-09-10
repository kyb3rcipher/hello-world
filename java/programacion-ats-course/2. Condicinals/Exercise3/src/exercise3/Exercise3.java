// Exercise 3: Make a program that reads a character on the keyboard and checks if it is a capital letter.
package exercise3;

import javax.swing.JOptionPane;

public class Exercise3 {
    
    
    public static void main(String[] args) {
        char letter;
        
        letter = JOptionPane.showInputDialog("Enter a letter: ").charAt(0);
        
        if (Character.isUpperCase(letter)) {
            JOptionPane.showMessageDialog(null, "The letter entered is a capital letter");
        } else if (Character.isLowerCase(letter)) {
            JOptionPane.showMessageDialog(null, "The letter entered is a lower case letter");
        } else {
            JOptionPane.showMessageDialog(null, "The character entered is not a letter");
        }
    }
    
}
