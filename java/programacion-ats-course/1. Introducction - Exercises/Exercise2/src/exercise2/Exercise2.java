// Exercise 2: Write a program that calculates and prints the weekly salary of an employee based on his weekly hours worked and his hourly wage.
package exercise2;

import java.util.Scanner;

public class Exercise2 {
    
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int hours;
        float hourlyWage;
        float pay;
        
        System.out.print("Enter your weekly hours worked: ");
        hours = input.nextInt();
        System.out.print("Enter your hourly wage: ");
        hourlyWage = input.nextFloat();
        
        pay = hours * hourlyWage;
        System.out.println("\nThe total pay is: " + pay);
    }
    
}
