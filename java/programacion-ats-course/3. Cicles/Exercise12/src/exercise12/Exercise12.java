/* Exercise 12: Ask for a number and calculate its factorial.
 N! = 1 * 2 * 3 ... * N */
package exercise12;

import java.util.Scanner;

public class Exercise12 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int productNumber;
        long product = 1;
        
        System.out.print("Enter the product number: ");
        productNumber = input.nextInt();
        
        for (int i = productNumber; i >= 1; i--) {
            product *= i;
        }
        
        // Print product.
        System.out.println("\nThe product of " + productNumber + "!: "+ product);
        
    }
    
}
