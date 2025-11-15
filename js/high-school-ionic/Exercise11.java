package practicasplataforma_exercisesimages;

import java.applet.Applet;
import java.applet.AudioClip;
import java.awt.Image;
import javax.swing.ImageIcon;

public class Exercise11 extends javax.swing.JFrame {

    public Exercise11() {
        initComponents();
        setTitle("Exercise11: Multimedia - Kyb3r Cipher");
        setLocationRelativeTo(this);
        
        // Set default song.
        audio("no-the-moon.wav");
        animation("piano.gif");
    }
    
    AudioClip audio;
    public void animation(String image){       
        ImageIcon imgFigura = new ImageIcon(getClass().getResource("images/" + image));
        Image imgAnima = imgFigura.getImage().getScaledInstance
        (labelAnimation.getWidth(), labelAnimation.getHeight(), Image.SCALE_DEFAULT);
        labelAnimation.setIcon(new ImageIcon(imgAnima));        
    }
    
    public void audio(String file){
        try {
            stopAudio();
            audio = Applet.newAudioClip(getClass().getResource("audios/" + file));
            audio.play();
        } catch(Exception ex){
            System.err.println(ex+" Error!.");
        }
    }
    
     public void stopAudio(){
      try {
        audio.stop();
      } catch(Exception ex){
        System.out.println("The sound stopped!.");
      }
    }
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jButton2 = new javax.swing.JButton();
        buttonConanGray = new javax.swing.JButton();
        buttonBadBunny = new javax.swing.JButton();
        ButtonPiano = new javax.swing.JButton();
        buttonStop = new javax.swing.JButton();
        labelAnimation = new javax.swing.JLabel();

        jButton2.setText("jButton2");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        buttonConanGray.setText("Conan-Gray");
        buttonConanGray.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buttonConanGrayActionPerformed(evt);
            }
        });

        buttonBadBunny.setText("Benito");
        buttonBadBunny.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buttonBadBunnyActionPerformed(evt);
            }
        });

        ButtonPiano.setText("Cavetown");
        ButtonPiano.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonPianoActionPerformed(evt);
            }
        });

        buttonStop.setFont(new java.awt.Font("Segoe UI", 1, 15)); // NOI18N
        buttonStop.setForeground(new java.awt.Color(255, 0, 0));
        buttonStop.setText("STOP");
        buttonStop.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buttonStopActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(labelAnimation, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(buttonConanGray)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(buttonBadBunny)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ButtonPiano)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(buttonStop)
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(labelAnimation, javax.swing.GroupLayout.DEFAULT_SIZE, 247, Short.MAX_VALUE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(buttonConanGray)
                    .addComponent(buttonBadBunny)
                    .addComponent(ButtonPiano)
                    .addComponent(buttonStop))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void buttonConanGrayActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buttonConanGrayActionPerformed
        audio("never-ending-song.wav");
        animation("conan-wet-dog.gif");
    }//GEN-LAST:event_buttonConanGrayActionPerformed

    private void buttonBadBunnyActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buttonBadBunnyActionPerformed
        audio("otro-atardecer.wav");
        animation("un-verano-sin-ti.gif");
    }//GEN-LAST:event_buttonBadBunnyActionPerformed

    private void ButtonPianoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonPianoActionPerformed
        audio("devil-town.wav");
        animation("cavetown.gif");
    }//GEN-LAST:event_ButtonPianoActionPerformed

    private void buttonStopActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buttonStopActionPerformed
        stopAudio();
        animation("stop-music.gif");
    }//GEN-LAST:event_buttonStopActionPerformed

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
            java.util.logging.Logger.getLogger(Exercise11.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Exercise11.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Exercise11.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Exercise11.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Exercise11().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton ButtonPiano;
    private javax.swing.JButton buttonBadBunny;
    private javax.swing.JButton buttonConanGray;
    private javax.swing.JButton buttonStop;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel labelAnimation;
    // End of variables declaration//GEN-END:variables
}
