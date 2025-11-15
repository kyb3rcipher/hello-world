/*
Practices UNIPOLI
Name: Kyb3r Cipher
School: CBTIS 89 - 3A TM
*/
package practicasunipoli;

import javax.swing.JOptionPane;

public class PracticasUNIPOLI {
    
    public static void main(String[] args) {
        int practice;

        do {
            practice = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter the number of practice <5-16>:"));
        } while (practice < 5 || practice > 16);

        switch (practice) {
            case 5:
                Pr05 pr5 = new Pr05();
                pr5.setVisible(true);
                break;
            case 6:
                Pr06 pr6 = new Pr06();
                pr6.setVisible(true);
                break;
            case 7:
                Pr07 pr7 = new Pr07();
                pr7.setVisible(true);
                break;
            case 8:
                Pr08 pr8 = new Pr08();
                pr8.setVisible(true);
                break;
            case 11:
                Pr11 pr11 = new Pr11();
                pr11.setVisible(true);
                break;
            case 12:
                Pr12 pr12 = new Pr12();
                pr12.setVisible(true);
                break;
            case 13:
                Pr13 pr13 = new Pr13();
                pr13.setVisible(true);
                break;
            case 14:
                Pr14 pr14 = new Pr14();
                pr14.setVisible(true);
                break;
            case 15:
                Pr15 pr15 = new Pr15();
                pr15.setVisible(true);
                break;
            case 16:
                Pr16 pr16 = new Pr16();
                pr16.setVisible(true);
                break;
        }
    }
    
}
