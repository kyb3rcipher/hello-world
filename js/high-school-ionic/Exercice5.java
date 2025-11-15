/*Exercise 5: The final grade of a computer science student is calculated based on the grades of four aspects of their academic performance:
 participation, first partial exam, second partial exam, and final exam.
 Knowing that the previous qualifications enter the qualification with power of 10%, 20%, 2% and 40%.
 Make a program that calculates and prints the final grade obtained by a student.*/
package exercice5;

import java.util.Scanner;

public class Exercice5 {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float performance, test1, test2, test3, grade;
        
        System.out.print("Enter your performace grade: ");
        performance = input.nextFloat();
        System.out.print("Enter your test 1, 2 and 3 scores: ");
        test1 = input.nextFloat();
        test2 = input.nextFloat();
        test3 = input.nextFloat();
        
        /* Tutorial method.
        performance *= 0.10;
        test1 *= 0.25;
        test2 *= 0.25;
        test3 *= 0.40;
        grade = performance + test1 + test2 + test3;
        */
        // My method.
        grade = (float) ( (performance * 0.10) + (test1 * 0.25) + (test2 * 0.25) + (test3 * 0.40) );
        
        System.out.println("Your final grade is: " + grade);
    }
    
}
