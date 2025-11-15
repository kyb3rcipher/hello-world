// Exercise 16: Ask for a number (which must be between 0 and 10) and show the multiplication table of said number.
package exercise16;

import java.util.Scanner;

public class Exercise16 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number;
        
        // Ask for the table number.
        System.out.print("What multiplication table do you want? <0-10>: ");
        number = input.nextInt();
        while (number < 0 || number > 10) {
            System.out.println("\nERROR: The number must be between 0 and 10 try again.");
            System.out.print("What multiplication table do you want? <0-10>: ");
            number = input.nextInt();
        }
        
        // Print the table number.
        for (int i = 1; i <= number; i++) {
            System.out.println(number + " * " + i + " = " + (number * i));
        }
        
    }
    
}
