package introducction;

import practicasunipoli.*;

public class Pr05 extends javax.swing.JFrame {
    
    public Pr05() {
        initComponents();
        setTitle("Pr05: Mouse event - Kyb3r Cipher");
        setLocationRelativeTo(null);
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        labelWord1 = new javax.swing.JLabel();
        labelWord3 = new javax.swing.JLabel();
        labelWord4 = new javax.swing.JLabel();
        labelWord2 = new javax.swing.JLabel();
        labelHide = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        labelWord1.setFont(new java.awt.Font("Times New Roman", 0, 14)); // NOI18N
        labelWord1.setForeground(new java.awt.Color(255, 51, 0));
        labelWord1.setText("Benito");

        labelWord3.setFont(new java.awt.Font("Gabriola", 0, 18)); // NOI18N
        labelWord3.setForeground(new java.awt.Color(204, 0, 204));
        labelWord3.setText("Cat");

        labelWord4.setFont(new java.awt.Font("Arial", 2, 14)); // NOI18N
        labelWord4.setForeground(new java.awt.Color(0, 204, 204));
        labelWord4.setText("Coruscant");

        labelWord2.setFont(new java.awt.Font("Consolas", 0, 14)); // NOI18N
        labelWord2.setForeground(new java.awt.Color(255, 102, 0));
        labelWord2.setText("UwU");

        labelHide.setFont(new java.awt.Font("Arial Black", 1, 18)); // NOI18N
        labelHide.setForeground(new java.awt.Color(0, 51, 255));
        labelHide.setText("HIDE");
        labelHide.setBorder(javax.swing.BorderFactory.createTitledBorder(""));
        labelHide.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                labelHideMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                labelHideMouseExited(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap()
                        .addComponent(labelWord4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(labelWord3, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(169, 169, 169)
                        .addComponent(labelHide)
                        .addGap(0, 170, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap()
                        .addComponent(labelWord1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(labelWord2, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(labelWord4)
                    .addComponent(labelWord3))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(labelWord1)
                    .addComponent(labelWord2))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 138, Short.MAX_VALUE)
                .addComponent(labelHide)
                .addGap(59, 59, 59))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void labelHideMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_labelHideMouseEntered
        labelWord1.setVisible(false);
        labelWord2.setVisible(false);
        labelWord3.setVisible(false);
        labelWord4.setVisible(false);
    }//GEN-LAST:event_labelHideMouseEntered

    private void labelHideMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_labelHideMouseExited
        labelWord1.setVisible(true);
        labelWord2.setVisible(true);
        labelWord3.setVisible(true);
        labelWord4.setVisible(true);
    }//GEN-LAST:event_labelHideMouseExited

    /**
     * @param args the command line arguments
     */
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
            java.util.logging.Logger.getLogger(Pr05.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Pr05.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Pr05.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Pr05.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Pr05().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel labelHide;
    private javax.swing.JLabel labelWord1;
    private javax.swing.JLabel labelWord2;
    private javax.swing.JLabel labelWord3;
    private javax.swing.JLabel labelWord4;
    // End of variables declaration//GEN-END:variables

}
