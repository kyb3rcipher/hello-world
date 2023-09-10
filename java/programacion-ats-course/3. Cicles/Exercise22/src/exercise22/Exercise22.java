// Exercise 22: Ask for 5 grades from students and say at the end if there is any failing.
package exercise22;

import javax.swing.JOptionPane;

public class Exercise22 {
    
    public static void main(String[] args) {
        boolean failed = false;
        
        for (int i = 0; i < 5; i++) {
            float grade;
            
            // Ask the grade.
            grade = Float.parseFloat(JOptionPane.showInputDialog((i + 1) + ".- Enter your grade: "));
            
            if (grade <= 5)
                failed = true;
        }
        
        // Show result.
        if (failed) {
            JOptionPane.showMessageDialog(null, "There are failing student[s].");
        } else {
            JOptionPane.showMessageDialog(null, "There are not failing student[s].");
        }
    }
    
}
