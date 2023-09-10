// Exercise 7: Ask for numbers until a negative one is entered, and calculate the mean.
package exercise7;

import javax.swing.JOptionPane;
import java.util.Scanner;

public class Exercise7 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float number, sum = 0, elemnts = 0, average;
        
        // Ask for the number.
        System.out.print("Enter a number: ");
        number = input.nextFloat();
        
        while (number >= 0) {
            sum += number;
            elemnts++;
            
            // Ask for another number.
            System.out.print("Enter another number: ");
            number = input.nextFloat();
        }
        
        
        // If there are no items terminate.
        if (elemnts == 0) {
            JOptionPane.showMessageDialog(null, "The zero division is imposible!", "ERROR", JOptionPane.ERROR_MESSAGE);
            System.exit(1);
        }
        
        // Calculate the avarage.
        average = sum / elemnts;
        
        // Show the avarage.
        JOptionPane.showMessageDialog(null, "The average is: " + average);
    }
    
}
