// Exercise 12: Ask for a grade from 0 to 10 and show it in the form: Insufficient, Sufficient, Good, Notable and Outstanding.
package exercise12;

import javax.swing.JOptionPane;

public class Exercise12 {

    
    public static void main(String[] args) {
        int grade;
        
        // Ask the grade.
        grade = Integer.parseInt(JOptionPane.showInputDialog("Enter your grade: "));
        
        switch (grade) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                JOptionPane.showMessageDialog(null,"Your grade is Insufficient.");
                break;
            case 6:
            case 7:
                JOptionPane.showMessageDialog(null,"Your grade is Sufficient.");
                break;
            case 8:
                JOptionPane.showMessageDialog(null,"Your grade is Good.");
                break;
            case 9:
               JOptionPane.showMessageDialog(null,"Your grade is Notable.");
                break;
            case 10:
                JOptionPane.showMessageDialog(null,"Your grade is Outstanding.");
                break;
            
            default:
                JOptionPane.showMessageDialog(null, "Your grade is invalid!", "ERROR", JOptionPane.ERROR_MESSAGE);
                break;
        }
        
    }
    
}
