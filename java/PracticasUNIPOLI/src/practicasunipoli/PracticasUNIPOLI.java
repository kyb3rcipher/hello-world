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
            practice = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter the number of practice <1-6>:"));
        } while (practice < 1 || practice > 6);

        switch (practice) {
            case 1:
                Pr01 pr1 = new Pr01();
                pr1.setVisible(true);
                break;
            case 2:
                Pr02 pr2 = new Pr02();
                pr2.setVisible(true);
                break;
            case 3:
                Pr03 pr3 = new Pr03();
                pr3.setVisible(true);
                break;
            case 4:
                Pr04 pr4 = new Pr04();
                pr4.setVisible(true);
                break;
            case 5:
                Pr05 pr5 = new Pr05();
                pr5.setVisible(true);
                break;
            case 6:
                Pr06 pr6 = new Pr06();
                pr6.setVisible(true);
                break;
        }
    }
    
}
