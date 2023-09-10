// Exercise 9: Ask for the day, month and year of a date and indicate if the date is correct. Assuming that every month has 30 days.
package exercise9;

import javax.swing.JOptionPane;

public class Exercise9 {

    
    public static void main(String[] args) {
        int day, month, year;
        
        // Ask the date.
        JOptionPane.showMessageDialog(null, "Enter a date.");
        day = Integer.parseInt(JOptionPane.showInputDialog("Enter the day: "));
        month = Integer.parseInt(JOptionPane.showInputDialog("Enter the month: "));
        year = Integer.parseInt(JOptionPane.showInputDialog("Enter the year: "));
        
        // Show if the date is correct.
        if (day >= 1 && day <= 30) {
            if (month >= 1 && month <= 12) {
                if (year >= 0) {
                    JOptionPane.showMessageDialog(null, "The date is correct.");
                }
            }
        } else {
            JOptionPane.showMessageDialog(null, "The date is incorrect.");
        }
        
    }
    
}
