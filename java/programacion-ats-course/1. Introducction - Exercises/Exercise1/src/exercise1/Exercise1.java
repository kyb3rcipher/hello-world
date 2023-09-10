/*Exercise 1: Make a program that calculates and prints the sum of 3 grades.*/
package exercise1;

import java.util.Scanner;

public class Exercise1 {
    
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float grade1, grade2, grade3, sum;
        
        System.out.print("Enter the grade 1: ");
        grade1 = input.nextFloat();
        System.out.print("Enter the grade 2: ");
        grade2 = input.nextFloat();
        System.out.print("Enter the grade 3: ");
        grade3 = input.nextFloat();
        
        sum = grade1 + grade2 + grade3;
        System.out.println("\nThe result of the sum is: " + sum);
    }
    
}
