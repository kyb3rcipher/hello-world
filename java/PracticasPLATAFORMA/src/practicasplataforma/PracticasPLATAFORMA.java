/*
Practices PLATAFORMA
Name: Kyb3r Cipher
School: CBTIS 89 - 3A TM
*/
package practicasplataforma;

import javax.swing.JOptionPane;

public class PracticasPLATAFORMA {
    
    public static void main(String[] args) {
        int practice;

        do {
            practice = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter the number of practice <1-3>:"));
        } while (practice % 2 == 0 && practice > 3 && practice != 2);

        switch (practice) {
            case 1:
                Exercise01 ex1 = new Exercise01();
                ex1.setVisible(true);
                break;
            case 3:
                Exercise03 ex3 = new Exercise03();
                ex3.setVisible(true);
                break;
        }
    }
}