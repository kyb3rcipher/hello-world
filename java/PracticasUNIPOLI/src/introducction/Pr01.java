package introducction;

import practicasunipoli.*;

public class Pr01 extends javax.swing.JFrame {
    
    public Pr01() {
        initComponents();
        setTitle("Pr01: Hide and unhide labels - Kyb3r Cipher"); // set title.
        setLocationRelativeTo(null); // set default postion to center.
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        labelName = new javax.swing.JLabel();
        labelCity = new javax.swing.JLabel();
        buttonHideName = new javax.swing.JButton();
        buttonHideCity = new javax.swing.JButton();
        buttonViewName = new javax.swing.JButton();
        buttonViewCity = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        labelName.setFont(new java.awt.Font("Arial Black", 0, 12)); // NOI18N
        labelName.setText("Name: Kyb3r");

        labelCity.setFont(new java.awt.Font("Arial Black", 0, 12)); // NOI18N
        labelCity.setText("City: Mexico");

        buttonHideName.setText("Hide name");
        buttonHideName.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buttonHideNameActionPerformed(evt);
            }
        });

        buttonHideCity.setText("Hide city");
        buttonHideCity.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buttonHideCityActionPerformed(evt);
            }
        });

        buttonViewName.setText("View name");
        buttonViewName.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buttonViewNameActionPerformed(evt);
            }
        });

        buttonViewCity.setText("View city");
        buttonViewCity.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buttonViewCityActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(buttonViewName)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(buttonViewCity, javax.swing.GroupLayout.PREFERRED_SIZE, 92, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap())
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGap(0, 152, Short.MAX_VALUE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(labelName)
                            .addComponent(labelCity))
                        .addGap(156, 156, 156))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(buttonHideName)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(buttonHideCity, javax.swing.GroupLayout.PREFERRED_SIZE, 92, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap())))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(37, 37, 37)
                .addComponent(labelName)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(labelCity)
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(buttonViewName)
                    .addComponent(buttonViewCity))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(buttonHideCity)
                    .addComponent(buttonHideName))
                .addContainerGap(137, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void buttonHideNameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buttonHideNameActionPerformed
        labelName.setVisible(false);
    }//GEN-LAST:event_buttonHideNameActionPerformed

    private void buttonHideCityActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buttonHideCityActionPerformed
        labelCity.setVisible(false);
    }//GEN-LAST:event_buttonHideCityActionPerformed

    private void buttonViewNameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buttonViewNameActionPerformed
        labelName.setVisible(true);
    }//GEN-LAST:event_buttonViewNameActionPerformed

    private void buttonViewCityActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buttonViewCityActionPerformed
        labelCity.setVisible(true);
    }//GEN-LAST:event_buttonViewCityActionPerformed

    
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
            java.util.logging.Logger.getLogger(Pr01.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Pr01.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Pr01.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Pr01.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Pr01().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton buttonHideCity;
    private javax.swing.JButton buttonHideName;
    private javax.swing.JButton buttonViewCity;
    private javax.swing.JButton buttonViewName;
    private javax.swing.JLabel labelCity;
    private javax.swing.JLabel labelName;
    // End of variables declaration//GEN-END:variables
}
