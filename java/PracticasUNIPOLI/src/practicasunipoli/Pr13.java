package practicasunipoli;

import java.awt.Color;

public class Pr13 extends javax.swing.JFrame {
    
    public Pr13() {
        initComponents();
        setTitle("Pr13: Menu bar - Kyb3r Cipher");
        setLocationRelativeTo(null);
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        jMenu2 = new javax.swing.JMenu();
        menuColors = new javax.swing.JMenu();
        colorRed = new javax.swing.JMenuItem();
        colorGreen = new javax.swing.JMenuItem();
        colorBlue = new javax.swing.JMenuItem();
        jSeparator1 = new javax.swing.JPopupMenu.Separator();
        colorReset = new javax.swing.JMenuItem();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jMenu1.setText("File");
        jMenuBar1.add(jMenu1);

        jMenu2.setText("Edit");

        menuColors.setText("Colors");

        colorRed.setForeground(new java.awt.Color(255, 51, 51));
        colorRed.setText("Red");
        colorRed.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorRedActionPerformed(evt);
            }
        });
        menuColors.add(colorRed);

        colorGreen.setForeground(new java.awt.Color(0, 255, 0));
        colorGreen.setText("Green");
        colorGreen.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorGreenActionPerformed(evt);
            }
        });
        menuColors.add(colorGreen);

        colorBlue.setForeground(new java.awt.Color(51, 51, 255));
        colorBlue.setText("Blue");
        colorBlue.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorBlueActionPerformed(evt);
            }
        });
        menuColors.add(colorBlue);
        menuColors.add(jSeparator1);

        colorReset.setText("Reset");
        colorReset.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorResetActionPerformed(evt);
            }
        });
        menuColors.add(colorReset);

        jMenu2.add(menuColors);

        jMenuBar1.add(jMenu2);

        setJMenuBar(jMenuBar1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 270, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void colorRedActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_colorRedActionPerformed
        this.getContentPane().setBackground(Color.RED);
    }//GEN-LAST:event_colorRedActionPerformed

    private void colorGreenActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_colorGreenActionPerformed
        this.getContentPane().setBackground(Color.GREEN);
    }//GEN-LAST:event_colorGreenActionPerformed

    private void colorBlueActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_colorBlueActionPerformed
        this.getContentPane().setBackground(Color.BLUE);
    }//GEN-LAST:event_colorBlueActionPerformed

    private void colorResetActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_colorResetActionPerformed
        this.getContentPane().setBackground(Color.white);
    }//GEN-LAST:event_colorResetActionPerformed
    
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Pr13.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Pr13.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Pr13.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Pr13.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Pr13().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenuItem colorBlue;
    private javax.swing.JMenuItem colorGreen;
    private javax.swing.JMenuItem colorRed;
    private javax.swing.JMenuItem colorReset;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu2;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JPopupMenu.Separator jSeparator1;
    private javax.swing.JMenu menuColors;
    // End of variables declaration//GEN-END:variables
}
