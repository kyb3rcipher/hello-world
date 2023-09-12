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
            practice = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter the number of practice <1-2>:"));
        } while (practice < 1 || practice > 2);

        switch (practice) {
            case 1:
                Exercise01 ex1 = new Exercise01();
                ex1.setVisible(true);
                break;
            case 2:
                Exercise02 ex2 = new Exercise02();
                ex2.setVisible(true);
                break;
        }
    }
}
