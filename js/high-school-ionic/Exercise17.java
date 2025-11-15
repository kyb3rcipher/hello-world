/*Exercise 17: A company that is dedicated to the sale of disinfectants you need a program for manage invoices.
Each invoice contains the article code, the quantity sold in liters and the price per liter 5 invoices entered are requested:
Total billing, quantity in liters sold of the article 1 and how many invoices were issued for more than $600. */
package exercise17;

import javax.swing.JOptionPane;

public class Exercise17 {
    
    public static void main(String[] args) {
        int invoiceGreater600 = 0, litersArticle1 = 0;
        float invoiceAmount, invoiceTotal = 0;
        
        for (int i = 1; i <= 5; i++) {
            int code, liters; float priceLiter;
            
            // Ask information.
            code = Integer.parseInt(JOptionPane.showInputDialog("Article " + i + "\n" + "Enter the article code: "));
            liters = Integer.parseInt(JOptionPane.showInputDialog("Article " + i + "\n" + "Enter the sold amount (litters): "));
            priceLiter = Float.parseFloat(JOptionPane.showInputDialog("Article " + i + "\n" + "Enter the price of liter: $"));
            
            // Save liters of article 1.
            if (code == 1) { litersArticle1 = litersArticle1 + liters; }
            
            // Calculate invoices.
            invoiceAmount = liters * priceLiter;
            invoiceTotal += invoiceAmount; // add invoice to total invoice.
            
            invoiceGreater600 += (invoiceAmount > 600) ? 1 : 0; // if the invoise is grather than 600 add to the counter.
        }
        
        System.out.println("Sales summary");
        System.out.println("Invoice Total: " + invoiceTotal);
        System.out.println("Quantity in liters sold of article 1: " + litersArticle1);
        System.out.println("Number of invoices greater than $600: " + invoiceGreater600);
    }
    
}
