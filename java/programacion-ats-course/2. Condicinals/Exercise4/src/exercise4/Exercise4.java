/* Ejercicio 4: En megaplaza se hace un 20% de descuento  los clientes cuya compra supere los $300. 
 ¿Cuál será la cantidad que pagará una persona por su compra? */
package exercise4;

import javax.swing.JOptionPane;

public class Exercise4 {
    
    
    public static void main(String[] args) {
        float purchase;
        
        purchase = Float.parseFloat(JOptionPane.showInputDialog("Enter you total purchase: "));
        
        if (purchase >= 300) {
            JOptionPane.showMessageDialog(null, "The total is: " + purchase + "\nThe total with discount: " + purchase * 0.30 );
        } else {
            JOptionPane.showMessageDialog(null, "The total is: " + purchase);
        }
    }
    
}
