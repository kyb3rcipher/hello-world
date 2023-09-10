// Exercise 4: Ask for numbers until a negative one is typed, and show how many numbers have been entered.
package exercise4;

import javax.swing.JOptionPane;

public class Exercise4 {

    
    public static void main(String[] args) {
        int number, counter = 0;
        
        do {
            number = Integer.parseInt(JOptionPane.showInputDialog("Enter a number: "));
            counter++;
        } while (number >= 0);
        
        JOptionPane.showMessageDialog(null, "The number of introced numbers is: " + counter);
    }
    
}
