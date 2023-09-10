// Exercise 6: Ask for numbers until a 0 is typed, show the sum of all the numbers entered.
package exercise6;

import java.util.Scanner;

public class Exercise6 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float number, sum = 0;
        
        do {
            System.out.print("Enter a number: ");
            number = input.nextFloat();
            sum += number;
        } while (number != 0);
        
        System.out.println("\nThe sum of all number is: " + sum);
    }
    
}
