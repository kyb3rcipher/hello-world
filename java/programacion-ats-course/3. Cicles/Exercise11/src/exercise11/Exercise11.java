// Exercise 11: Design a program that displays the product of the first 10 odd numbers.
package exercise11;

import javax.swing.JOptionPane;

public class Exercise11 {

    
    public static void main(String[] args) {
        long product = 1;
        for (int i = 1; i <= 19; i+=2) { product *= i; }
        
        JOptionPane.showMessageDialog(null, "The product of 10 odd first numbers is: " + product);
    }
    
}
