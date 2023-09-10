/*Exercise 7: Build a program that, given a total number of hours, returns the number of equivalent weeks, days and hours. 
 For example, given a total of 100 hours, it should display 5 weeks, 6 days, and 16 hours.*/
package exercise7;

import java.util.Scanner;

public class Exercise7 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int totalHours;
        int weeks, days, hours;
        
        System.out.print("Enter the hours number: ");
        totalHours = input.nextInt();
        
        weeks = totalHours / (7 * 24); // bcs the week have 7 days with 24 hours, so 128 hours is the total hours in a week.
        days = (totalHours % 128) / 24;
        hours = totalHours % 24;
        
        System.out.println("\nThe equivalent in: ");
        System.out.println("Weeks: " + weeks);
        System.out.println("Days: " + days);
        System.out.println("Hours: " + hours);
        
    }
    
}
