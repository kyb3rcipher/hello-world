// Exercise 13: Ask for 10 numbers. Show the mean of the positive numbers, the mean of the negative numbers, and the number of zeros.
package exercise13;

import javax.swing.JOptionPane;

public class Exercise13 {

    
    public static void main(String[] args) {
        float positivesSum = 0, positivesAverage, negativesSum = 0,  negativesAverage;
        int positivesElemnts = 0, negativesElemnts = 0, zeroElements = 0;
        
        for (int i = 0; i < 10; i++) {
            int number;
            
            // Ask for the number
            number = Integer.parseInt(JOptionPane.showInputDialog("Enter a number: "));
            
            // Check the number type.
            if (number > 0) {
                positivesSum += number;
                positivesElemnts++;
            } else if (number < 0) {
                negativesSum += number;
                negativesElemnts++;
            } else {
                zeroElements++;
            }
            
        }
        
        // Print results and calculate.
        
        // Check if any of the number of positive or negative elements is equal to 0.
        if (positivesElemnts == 0) { JOptionPane.showMessageDialog(null, "There were no positive elements."); }
        else {
            positivesAverage = positivesSum / positivesElemnts;
            JOptionPane.showMessageDialog(null,"The positive average is:" + positivesAverage);
        }
        if (negativesElemnts == 0) { JOptionPane.showMessageDialog(null, "There were no negatives elements."); }
        else {
            negativesAverage = negativesSum / negativesElemnts;
            JOptionPane.showMessageDialog(null, "The negative average is: " + negativesAverage);
        }
        
        JOptionPane.showMessageDialog(null, "The zero elements is: " + zeroElements);
    }
    
}
