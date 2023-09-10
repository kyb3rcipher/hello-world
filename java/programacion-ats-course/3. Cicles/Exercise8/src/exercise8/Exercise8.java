// Exercise 8: Ask for a number N, and show all the numbers from 1 to N.
package exercise8;

import javax.swing.JOptionPane;


public class Exercise8 {

    
    public static void main(String[] args) {
        int numberLimit;
        
        numberLimit = Integer.parseInt(JOptionPane.showInputDialog("Enter the limit number: "));
        
        for (int i = 1; i <= numberLimit; i++) {
            System.out.println(i);
        }
        
    }
    
}
