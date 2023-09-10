/* Exercise 3: Guillermo has N dollars. Luis has half of what Guillermo owns.
 Juan has half of what Luis and Guillermo have together.
 Make a program that calculates and prints the amount of money that the three of them have. */
package exercise3;

import java.util.Scanner;

public class Exercise3 {
    
    
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       float guillermoDollars, luisDollars, juanDollars, totalMoney;
       
       System.out.print("Guillermo enter your money: $");
       guillermoDollars = input.nextFloat();
       
       // Calcule the others moneys.
       luisDollars = guillermoDollars / 2;
       juanDollars = (guillermoDollars + luisDollars) / 2;
       totalMoney = guillermoDollars + luisDollars + juanDollars;
       
       // Print the result.
       System.out.println("\nThe Guillermo money is: $" + guillermoDollars);
       System.out.println("The Luis money is: $" + luisDollars);
       System.out.println("The Juan money is: $" + juanDollars);
       
       System.out.println("\nThe total of money are: $" + totalMoney);
    }
    
}
