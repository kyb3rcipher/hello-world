// Exercise 20: Ask for a number N, introduce N salaries, and show the maximum salary.
package exercise20;

import javax.swing.JOptionPane;

public class Exercise20 {

    public static void main(String[] args) {
        int wages, maxWage = 0;
        
        wages = Integer.parseInt(JOptionPane.showInputDialog("Enter the number of wages: "));
        
        for (int i = 0; i < wages; i++) {
            float wage;
            
            wage = Float.parseFloat(JOptionPane.showInputDialog((i + 1) + ".- Enter your wage: "));
            
            // If actual wage is grather than last max wage update the max wage.
            if (wage > maxWage) { maxWage = (int) wage; }
        }
        
        JOptionPane.showMessageDialog(null, "The max wage is: " + maxWage);
    }
    
}
