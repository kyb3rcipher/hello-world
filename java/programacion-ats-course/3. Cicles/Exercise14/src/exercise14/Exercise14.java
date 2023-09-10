// Exercise 14: ask for 10 salaries. Show their sum and when there are more than $1000.
package exercise14;

import javax.swing.JOptionPane;

public class Exercise14 {

    
    public static void main(String[] args) {
        float sum = 0;
        int overThousand = 0;
        
        int i = 0;
        while (i <= 9) {
            float salary;
            
            // Ask for the salary.
            salary = Float.parseFloat(JOptionPane.showInputDialog((i + 1) + ".- Enter salary: "));
            
            // Sum salary.
            sum += salary;
            
            // Check if the salary is over thousand and if is add one to the counter.
            overThousand += (salary > 1000) ? 1 : 0;
            
            i++; // increment iterator
        }
        
        // Print results.
        JOptionPane.showMessageDialog(null, "The sum of wages is: " + sum + "\n"
            + "The number of salaries greater than $1000 is: " + overThousand);
    }
    
}
