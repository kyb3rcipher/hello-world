/* Exercise 5: Play a game to guess a number. To do this, generate a random number between 0-100, 
 and then ask for numbers indicating "it is greater" or "it is less" depending on whether it is greater or less than N. 
 The process ends when the user is correct and shows the number of attempts. */
package exercise5;

import javax.swing.JOptionPane;

public class Exercise5 {

    
    public static void main(String[] args) {
        int number, randomNumber, attempts = 0;
        
        randomNumber = (int)(Math.random() * 100);
        //System.out.println("The random number is: " + randomNumber); // Show the random number in console.
        
        do {
            // Ask for a number.
            number = Integer.parseInt(JOptionPane.showInputDialog("Guess the number: "));
            
            // Show how close it is to the number.
            if (number < randomNumber) {
                System.out.println("The number is grater than " + number + ".");
            } else if (number > randomNumber) {
                System.out.println("The number is less than " + number + ".");
            }
            
            // Increase the number of attempts.
            attempts++;
        } while (number != randomNumber);
        
        // Print the result.
        JOptionPane.showMessageDialog(null, "OMG A WITCH?!, you guessed the number " + randomNumber + "."
            + "\nIt only take you " + attempts + " attepts.");
        
    }
    
}
