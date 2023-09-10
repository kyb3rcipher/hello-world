/* Exercise 10: Ask for the day, month and year of a date and indicate if the date is correct. 
 With months of 28, 30 and 31 days. No leap years. */
package exercise10;

import javax.swing.JOptionPane;

public class Exercise10 {

    
    public static void main(String[] args) {
        int day, month, year;
        boolean correctDate = false;
        
        JOptionPane.showMessageDialog(null, "Enter a date");
        day = Integer.parseInt(JOptionPane.showInputDialog("Enter the day: "));
        month = Integer.parseInt(JOptionPane.showInputDialog("Enter the month: "));
        year = Integer.parseInt(JOptionPane.showInputDialog("Enter the year: "));
        
        if (day >= 1) {
            
            if ((month == 2) && (day <= 28)) {
                correctDate = true;
            }

            if ((month == 4 || month == 6 || month == 9 || month == 11) && (day <= 30)) {
                correctDate = true;
            }

            if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day <= 31)) {
                correctDate = true;
            }
            
        }
        if (year < 0) { correctDate = false; }
        
        if (correctDate) {
            JOptionPane.showMessageDialog(null, "The date is correct.");
        } else {
            JOptionPane.showMessageDialog(null, "The date is incorrect.");
        }
        
    }
    
}
