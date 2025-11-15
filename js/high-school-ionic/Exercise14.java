// Exercise 14: Make a program that goes from Kg to any other unit of measurement of mass, display a menu on the screen with the possible options.
package exercise14;

import javax.swing.JOptionPane;

public class Exercise14 {

    
    public static void main(String[] args) {
        int option;
        float kilograms, pounds, ounces, grams, tons;
        
        kilograms = Float.parseFloat(JOptionPane.showInputDialog("Enter the kilograms: "));
        option = Integer.parseInt(JOptionPane.showInputDialog("Convert " + kilograms + " kilograms to:\n"
            + "1. Pounds\n"
            + "2. Ounces\n"
            + "3. Grams\n"
            + "4. Tons\n"
            + "5. Exit."));
        
        switch (option) {
            case 1:
                pounds = (float) (kilograms * 2.205);
                JOptionPane.showMessageDialog(null, kilograms +" Kilograms = " + pounds + " Pounds");
                break;
                
            case 2:
                ounces = (float) (kilograms * 35.274);
                JOptionPane.showMessageDialog(null, kilograms + " Kilograms = " + ounces + " Ounces");
                break;
                
            case 3:
                grams = (float) (kilograms * 1000);
                JOptionPane.showMessageDialog(null, kilograms + " Kilograms = " + grams + " Grams");
                break;
                
            case 4:
                tons = (float) (kilograms / 1000);
                JOptionPane.showMessageDialog(null, kilograms + " Kilograms = " + tons + " Tons");
                break;
                
            case 5:
                JOptionPane.showMessageDialog(null, "Exit.");
                System.exit(0);
                break;
                
            default:
                JOptionPane.showMessageDialog(null, "Invalid Option!", "ERROR", JOptionPane.ERROR_MESSAGE);
                System.exit(1);
                break;
        }
        
    }
    
}
