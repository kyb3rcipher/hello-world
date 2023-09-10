/*Exercise 8: Build a program that calculates and display on the screen the roots of the quadratic equation
 of real coefficients. ax² + bx + c = 0
 x = -b ± √b² - 4ac
 ------------------
        2a */
package exercise8;

import java.util.Scanner;

public class Exercise8 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a, b, c, x1, x2;
        
        // Ask for the values.
        System.out.print("Enter the a value: ");
        a = input.nextFloat();
        System.out.print("Enter b value: ");
        b = input.nextFloat();
        System.out.print("Enter c value: ");
        c = input.nextFloat();
        
        x1 = (float) ((-b + Math.sqrt( Math.pow(b, 2) - 4 * a * c ) ) / 2 * a);
        x2 = (float) ((-b - Math.sqrt( Math.pow(b, 2) - 4 * a * c ) ) / 2 * a);
        
        System.out.println("X1 = " + x1);
        System.out.println("X2 = " + x2);
    }
    
}
