/* Exercise 11: Build a program that simulates the operation of a calculator that can perform the four basic arithmetic operations
 (addition, subtraction, multiplication, division, product) with integer numerical values.
 The user must specify the operation with the first character of the first command line parameter:
 A or a for addition, S or s for subtraction, M or m for multiplication, D or d for division, P or p for product.*/
package exercise11;

import javax.swing.JOptionPane;

public class Exercise11 {

    
    public static void main(String[] args) {
        int number1, number2;
        char operation;
        
        number1 = Integer.parseInt(JOptionPane.showInputDialog("Enter the number 1: "));
        number2 = Integer.parseInt(JOptionPane.showInputDialog("Enter the number 2: "));
        operation = JOptionPane.showInputDialog("Enter the operation simbol or the first letter: ").charAt(0);
        
        switch (operation) {
            // Addition
            case 'A':
            case 'a':
            case '+':
                JOptionPane.showMessageDialog(null, number1 + " + " + number2 + " = " + number1 + number2);
                break;
            
            // Substraction
            case 'S':
            case 's':
            case '-':
                JOptionPane.showMessageDialog(null, number1 + " - " + number2 + " = " + (number1 - number2));
                break;
                
            // Multiply
            case 'M':
            case 'm':
            case '*':
            case 'x':
                JOptionPane.showMessageDialog(null, number1 + " * " + number2 + " = " + number1 * number2);
                break;
                
            // Division
            case 'D':
            case 'd': 
            case '/':
                JOptionPane.showMessageDialog(null, number1 + " /" + number2 + " = " + number1 / number2);
                break;
                
            // Product
            case 'P':
            case 'p':
            case '%':
                JOptionPane.showMessageDialog(null, number1 + " % " + number2 + " = " + number1 % number2);
                break;
                
            
            default:
                JOptionPane.showMessageDialog(null, "Invalid operator simbol!", "ERROR", JOptionPane.ERROR_MESSAGE);
                break;
        }

    }
    
}
    