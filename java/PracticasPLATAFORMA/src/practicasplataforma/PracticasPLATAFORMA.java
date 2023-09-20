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
            practice = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter the number of practice <1-4>:"));
        } while (practice < 1 || practice > 4);

        switch (practice) {
            case 1:
                Exercise01 ex1 = new Exercise01();
                ex1.setVisible(true);
                break;
            case 2:
                Exercise02 ex2 = new Exercise02();
                ex2.setVisible(true);
                break;
            case 3:
                Exercise03 ex3 = new Exercise03();
                ex3.setVisible(true);
                break;
            case 4:
                Exercise04 ex4 = new Exercise04();
                ex4.setVisible(true);
                break;
        }
    }
}
