package practicasunipoli;

import java.awt.Color;

public class Pr15 extends javax.swing.JFrame {

    public Pr15() {
        initComponents();
        setTitle("Pr15: Popup Menu - Kyb3r Cipher");
        setLocationRelativeTo(null);
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        popupMenu = new javax.swing.JPopupMenu();
        colorRed = new javax.swing.JMenuItem();
        colorGreen = new javax.swing.JMenuItem();
        colorBlue = new javax.swing.JMenuItem();
        jSeparator1 = new javax.swing.JPopupMenu.Separator();
        colorReset = new javax.swing.JMenuItem();

        colorRed.setForeground(new java.awt.Color(255, 0, 0));
        colorRed.setLabel("Red");
        colorRed.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorRedActionPerformed(evt);
            }
        });
        popupMenu.add(colorRed);
        colorRed.getAccessibleContext().setAccessibleDescription("");

        colorGreen.setForeground(new java.awt.Color(51, 255, 51));
        colorGreen.setLabel("Green");
        colorGreen.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorGreenActionPerformed(evt);
            }
        });
        popupMenu.add(colorGreen);

        colorBlue.setForeground(new java.awt.Color(0, 0, 255));
        colorBlue.setLabel("Blue");
        colorBlue.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorBlueActionPerformed(evt);
            }
        });
        popupMenu.add(colorBlue);
        popupMenu.add(jSeparator1);

        colorReset.setLabel("Reset");
        colorReset.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                colorResetActionPerformed(evt);
            }
        });
        popupMenu.add(colorReset);

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                formMouseClicked(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void formMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_formMouseClicked
        popupMenu.show(this,evt.getX(),evt.getY());
    }//GEN-LAST:event_formMouseClicked

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
        this.getContentPane().setBackground(Color.WHITE);
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
            java.util.logging.Logger.getLogger(Pr15.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Pr15.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Pr15.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Pr15.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Pr15().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenuItem colorBlue;
    private javax.swing.JMenuItem colorGreen;
    private javax.swing.JMenuItem colorRed;
    private javax.swing.JMenuItem colorReset;
    private javax.swing.JPopupMenu.Separator jSeparator1;
    private javax.swing.JPopupMenu popupMenu;
    // End of variables declaration//GEN-END:variables

}
