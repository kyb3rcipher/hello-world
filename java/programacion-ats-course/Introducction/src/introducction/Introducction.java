// Data input
package introducction;

import java.util.Scanner;
import javax.swing.JOptionPane;

public class Introducction {

    
    public static void main(String[] args) {
        /*Scanner input = new Scanner(System.in);
        char letter;
        
        System.out.print("Enter a character: ");
        letter  = input.next().charAt(0);
        
        System.out.println("The letter is: " + letter);
        */
        
        String chain;
        int integer;
        char letter;
        double decimal;
        
        chain = JOptionPane.showInputDialog("Enter a chain: ");
        integer = Integer.parseInt(JOptionPane.showInputDialog("Enter a integer number: "));
        letter = JOptionPane.showInputDialog("Enter a character: ").charAt(0);
        decimal = Double.parseDouble(JOptionPane.showInputDialog("Enter a decimal number: "));
        
        JOptionPane.showMessageDialog(null, "The chain is: " + chain);
        JOptionPane.showMessageDialog(null, "The integer number is: " + integer);
        JOptionPane.showMessageDialog(null, "The character is: " + letter);
        JOptionPane.showMessageDialog(null, "The decimal number is: " + decimal);
        
        
        
    }
    
}
