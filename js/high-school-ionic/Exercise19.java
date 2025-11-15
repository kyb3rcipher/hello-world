// Exercise 19: Given 6 marks, write the number of students: approved, conditioned (=4) and failed.
package exercise19;

import javax.swing.JOptionPane;

public class Exercise19 {

    public static void main(String[] args) {
        int failed = 0, conditioned = 0, approved = 0;
        
        for (int i = 0; i < 6; i++) {
            int grade;
            
            // Ask the grade.
            do {
                grade = Integer.parseInt(JOptionPane.showInputDialog((i + 1) + ".- Enter a grade <1-10>: "));
            } while (grade < 1 || grade > 10);
            
            // Switch the grade to the case.
            switch (grade) {
                case 1, 2, 3 -> failed++;
                case 4 -> conditioned++;
                case 5, 6, 7, 8, 9, 10 -> approved++;
            }
        }
        
        // Show results.
        JOptionPane.showMessageDialog(null, "The results are:\n"
            + "Approved = " + approved + ".\n"
            + "Conditioned = " + conditioned + ".\n"
            + "Failed = " + failed + ".");
    }
    
}
