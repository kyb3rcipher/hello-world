/* Exercise 13: Make a program that simulates an ATM with an initial balance of 1000 Dollars, with the following menu of options: 
 1. Add money to the account
 2. Withdraw money from the account
 3. Exit */
package exercise13;

import javax.swing.JOptionPane;

public class Exercise13 {

    
    public static void main(String[] args) {
        int option;
        float money = 1000;
        
        // Ask the option.
        JOptionPane.showMessageDialog(null, "ATM");
        option = Integer.parseInt(JOptionPane.showInputDialog("Your actual balance is: $" + money + "\n"
            + "Options:\n"
            + "1. Add money to the account.\n"
            + "2. Withdraw money from the account.\n"
            + "3. Exit."));
        
        // Switch the option.
        switch (option){
            case 1:
                money += Integer.parseInt(JOptionPane.showInputDialog("Enter the amount:"));
                break;
                
            case 2:
                int withdraw = Integer.parseInt(JOptionPane.showInputDialog("Enter the amount to withdraw:"));
                if (withdraw <= money) {
                    money -= withdraw;
                } else {
                    JOptionPane.showMessageDialog(null, "The money you want to withdraw is greater than the one you have!", "ERROR", JOptionPane.ERROR_MESSAGE);
                    System.exit(1);
                }
                break;

                
            case 3:
                JOptionPane.showMessageDialog(null, "Exit");
                break;
            
                
            default:
                JOptionPane.showMessageDialog(null, "Invalid Option!", "ERROR", JOptionPane.ERROR_MESSAGE);
                System.exit(1);
                break;
        }
        
        // Show final balance.
        JOptionPane.showMessageDialog(null, "The balance in the account is: $" + money + ".", "ATM", JOptionPane.DEFAULT_OPTION);
    }
    
}
