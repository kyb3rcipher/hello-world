// Exercise 10: Ask 10 numbers and write the total sum.
package exercise10;

import javax.swing.JOptionPane;

public class Exercise10 {

    
    public static void main(String[] args) {
        float number, sum = 0;
        for (int i = 1; i <= 10; i++) {
            number = Float.parseFloat(JOptionPane.showInputDialog(i + ".- Enter a number: "));
            sum += number;
        }
        JOptionPane.showMessageDialog(null, "The sum of numbers is: " + sum);
    }
    
}
