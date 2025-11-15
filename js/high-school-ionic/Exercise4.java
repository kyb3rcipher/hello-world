/*Exercise 4: A used car sales company pays its sales staff
 a salary of $1000 per month, plus a commission of $150 for each car sold,
 plus 5% of the value of the sale per car. Every month the company's capturer
 enter the relevant data into the computer. Make a program that calculates
 and print the monthly salary for a given salesperson.*/
package exercise4;

import java.util.Scanner;

public class Exercise4 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int soldedCars;
        float comisionPay, valuePay, totalPay;
        
        System.out.print("Enter the number of cars sold: ");
        soldedCars = input.nextInt();
        System.out.print("Enter the total amount of money for the cars: $");
        input.nextFloat();
        
        comisionPay = soldedCars * 150;
        valuePay = (float) (soldedCars * 0.05);
        totalPay = 1000 + comisionPay + valuePay;
        
        System.out.println("\nThe comision is: $" + comisionPay);
        System.out.println("The value pay is of %5 is: $" + valuePay);
        System.out.println("The total pay for the employee: $" + totalPay);
    }
    
}
