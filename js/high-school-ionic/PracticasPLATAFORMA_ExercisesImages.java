/*
Practices PLATAFORMA - Images
Name: Kyb3r Cipher
School: CBTIS 89 - 3A TM
*/
package practicasplataforma_exercisesimages;

import javax.swing.JOptionPane;

public class PracticasPLATAFORMA_ExercisesImages {

    public static void main(String[] args) {
        int practice;

        do {
            practice = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter the number of practice <5, 7, 8, 11, 12>:"));
        } while (practice != 5 && practice != 7 && practice != 8 && practice != 11 && practice != 12);

        switch (practice) {
            case 5:
                Exercise05 ex05 = new Exercise05();
                ex05.setVisible(true);
                break;
            case 7:
                Exercise07 ex07 = new Exercise07();
                ex07.setVisible(true);
                break;
            case 8:
                Exercise08 ex08 = new Exercise08();
                ex08.setVisible(true);
                break;
            case 11:
                Exercise11 ex11 = new Exercise11();
                ex11.setVisible(true);
                break;
            case 12:
                Exercise12 ex12 = new Exercise12();
                ex12.setVisible(true);
                break;
        }
    }
    
}
