/* Make some modifications to the previous exercise assuming that it is not entered the price per liter. There are only 3 products with prices:
1.- 0.6 $/ liter.
2.- 3$/ liter.
3.- 1.25 €/ liter. */
package exercise18;

import javax.swing.JOptionPane;

public class Exercise18 {
    
    public static void main(String[] args) {
        int invoiceGreater600 = 0, litersArticle1 = 0;
        float invoiceAmount, invoiceTotal = 0;
        
        for (int i = 1; i <= 5; i++) {
            int code, liters;
            float priceLiter = 0;
            
            // Ask information.
            code = Integer.parseInt(JOptionPane.showInputDialog("Article " + i + "\n" + "Enter the article code: "));
            liters = Integer.parseInt(JOptionPane.showInputDialog("Article " + i + "\n" + "Enter the sold amount (litters): "));
            
            // Switch price liter depending on the article code.
            switch (code) {
                case 1 -> {
                    priceLiter = (float) (0.6 / liters);
                    litersArticle1 = litersArticle1 + liters; // save liters of article 1.
                }
                case 2 -> priceLiter = 3 / liters;
                case 3 -> priceLiter = (float) (1.25 / liters);
                
                default -> {
                    JOptionPane.showMessageDialog(null, "Invalid article code!", "ERROR", JOptionPane.ERROR_MESSAGE);
                    System.exit(1);
                }
            }
            
            // Calculate invoices.
            invoiceAmount = liters * priceLiter;
            invoiceTotal += invoiceAmount; // add invoice to total invoice.
            
            invoiceGreater600 += (invoiceAmount > 600) ? 1 : 0; // if the invoise is grather than 600 add to the counter.
        }
        
        // Show results.
        System.out.println("Sales summary");
        System.out.println("Invoice Total: " + invoiceTotal);
        System.out.println("Quantity in liters sold of article 1: " + litersArticle1);
        System.out.println("Number of invoices greater than $600: " + invoiceGreater600);
    }
    
}
