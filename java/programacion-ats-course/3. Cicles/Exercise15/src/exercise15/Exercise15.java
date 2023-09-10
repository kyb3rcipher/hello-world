/* Exercise 15: Given the ages and heights of 5 students, show the average age and height,
 the number of students over 18 years of age, and the number of students who are taller than 1.75. */
package exercise15;

import javax.swing.JOptionPane;

public class Exercise15 {

    
    public static void main(String[] args) {
        int studentsOver18 = 0, studentsTall = 0;
        int sumAge = 0, ageAverage; float sumHeight = 0, heightAverage;
        
        for (int i = 0; i < 5; i++) {
            int age; float height;
            
            // Ask for age and add to the sum.
            age = Integer.parseInt(JOptionPane.showInputDialog("Enter the age of student " + (i + 1) + ": "));
            sumAge += age;
            
            // Ask for the height and add to the sum.
            height = Float.parseFloat(JOptionPane.showInputDialog("Enter the height of student " + (i + 1) + ": "));
            sumHeight += height;
            
            // If the student is different add to the counter.
            studentsOver18 += (age > 18) ? 1 : 0;
            studentsTall += (height > 1.75) ? 1 : 0;
        }
        
        // Calculates averages.
        ageAverage = sumAge / 5;
        heightAverage = sumHeight / 5;
        
        // Show results.
        JOptionPane.showMessageDialog(null, "The average age and height is: " + ageAverage + " " + heightAverage);
        JOptionPane.showMessageDialog(null, "The number of students over the age of 18 is: " + studentsOver18);
        JOptionPane.showMessageDialog(null, "The number of students taller than 1.75 is: " + studentsTall);
    }
    
}
