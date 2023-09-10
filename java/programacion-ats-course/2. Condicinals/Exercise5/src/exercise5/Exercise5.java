/* Exercise 5: A worker needs to calculate his weekly salary, which is obtained as follows: 
 * If he works 40 hours or less, he is paid $16 per hour.
 * If he works more than 40 hours, he is paid $16 for each of the first 40 hours and $20 for each extra hour. */
package exercise5;

import javax.swing.JOptionPane;

public class Exercise5 {
    
    
    public static void main(String[] args) {
        int hours, extraHours, pay = 0;
        
        hours = Integer.parseInt(JOptionPane.showInputDialog("Enter your weekly hours: "));
        
        if (hours <= 40) {
            pay = hours * 16;
        } else if (hours > 40) {
            extraHours = hours - 40;
            pay = 40 * 16 + (extraHours * 20);
        }
        
        JOptionPane.showMessageDialog(null, "Your total pay is: " + pay);
    }
    
}
