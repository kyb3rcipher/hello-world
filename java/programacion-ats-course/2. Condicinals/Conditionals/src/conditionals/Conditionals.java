package conditionals;

import javax.swing.JOptionPane;

public class Conditionals {

    
    public static void main(String[] args) {
        int number;
        
        number = Integer.parseInt(JOptionPane.showInputDialog("Enter a number: "));
        
        switch (number) {
            case 1:
            case 2: JOptionPane.showMessageDialog(null, "The number is 1 or 2"); break;
            case 3:
                JOptionPane.showMessageDialog(null, "The number is 3");
                break;
            case 4:
                JOptionPane.showMessageDialog(null, "The number is 4");
                break;
            case 5:
                JOptionPane.showMessageDialog(null, "The number is 5");
                break;
            
            default:
                JOptionPane.showMessageDialog(null, "The number is greater than 5");
                //break; // the break is optional in default case but is recommendable.
        }
        
    }
    
}
