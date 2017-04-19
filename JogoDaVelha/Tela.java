package jogodavelha;

import javax.swing.JOptionPane;

public class Tela extends javax.swing.JFrame {
    String nome1, nome2;
    String simbolo1, simbolo2;
    String jogada;
    String win;
    
    Velha velha;
    
    
    public Tela() {
        initComponents();
        velha = new Velha();
    }
    
    

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">                          
    private void initComponents() {

        nomeTela1 = new javax.swing.JTextField();
        nomeTela2 = new javax.swing.JTextField();
        simboloTela1 = new javax.swing.JTextField();
        simboloTela2 = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        iniciarTela = new javax.swing.JButton();
        a12 = new javax.swing.JButton();
        a13 = new javax.swing.JButton();
        a21 = new javax.swing.JButton();
        a11 = new javax.swing.JButton();
        a22 = new javax.swing.JButton();
        a23 = new javax.swing.JButton();
        a31 = new javax.swing.JButton();
        a32 = new javax.swing.JButton();
        a33 = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setResizable(false);

        nomeTela1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                nomeTela1ActionPerformed(evt);
            }
        });

        nomeTela2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                nomeTela2ActionPerformed(evt);
            }
        });

        simboloTela1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                simboloTela1ActionPerformed(evt);
            }
        });

        simboloTela2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                simboloTela2ActionPerformed(evt);
            }
        });

        jLabel1.setText("Jogador 1");

        jLabel2.setText("Jogador 2");

        jLabel3.setText("Símbolo");

        jLabel4.setText("Símbolo");

        iniciarTela.setText("Iniciar");
        iniciarTela.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iniciarTelaActionPerformed(evt);
            }
        });

        a12.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a12ActionPerformed(evt);
            }
        });

        a13.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a13ActionPerformed(evt);
            }
        });

        a21.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a21ActionPerformed(evt);
            }
        });

        a11.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a11ActionPerformed(evt);
            }
        });

        a22.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a22ActionPerformed(evt);
            }
        });

        a23.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a23ActionPerformed(evt);
            }
        });

        a31.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a31ActionPerformed(evt);
            }
        });

        a32.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a32ActionPerformed(evt);
            }
        });

        a33.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                a33ActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel1)
                    .addComponent(jLabel2))
                .addGap(8, 8, 8)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(iniciarTela)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(nomeTela2, javax.swing.GroupLayout.DEFAULT_SIZE, 77, Short.MAX_VALUE)
                            .addComponent(nomeTela1))
                        .addGap(32, 32, 32)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jLabel3)
                            .addComponent(jLabel4))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(simboloTela1, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(simboloTela2, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(a11)
                            .addComponent(a21)
                            .addComponent(a31))
                        .addGap(37, 37, 37)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(a12)
                            .addComponent(a22)
                            .addComponent(a32))
                        .addGap(37, 37, 37)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(a33)
                            .addComponent(a23)
                            .addComponent(a13))))
                .addContainerGap(107, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(nomeTela1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(simboloTela1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1)
                    .addComponent(jLabel3))
                .addGap(26, 26, 26)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(nomeTela2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(simboloTela2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel2)
                    .addComponent(jLabel4))
                .addGap(18, 18, 18)
                .addComponent(iniciarTela)
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(a11, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(a12, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(a13, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(27, 27, 27)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(a22, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(a23, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(a21, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 31, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(a31, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(a32, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(a33, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>                        

    private void simboloTela1ActionPerformed(java.awt.event.ActionEvent evt) {                                             
        // TODO add your handling code here:
    }                                            

    private void a12ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[1][2] = jogada;
        
        a12.setEnabled(false);
        
        
        a12.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
 
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
            else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }            
            
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
        
        }
        
        
    }                                   

    private void a13ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[1][3] = jogada;
        
        a13.setEnabled(false);
        
        
        a13.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
            else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }
            
            
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
            
        }        
    }                                   

    private void a21ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[2][1] = jogada;
        
        a21.setEnabled(false);
        
        
        a21.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
            else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }
            
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
        
        }        
    }                                   

    private void a11ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[1][1] = jogada;
        
        a11.setEnabled(false);
        
        
        
        a11.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
            else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }            
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
        
        }        
    }                                   

    private void a22ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[2][2] = jogada;
        
        a22.setEnabled(false);
        
        
        a22.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
            else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }            
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
        
        }        
    }                                   

    private void a23ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[2][3] = jogada;
        
        a23.setEnabled(false);
        
        
        a23.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
            else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }            
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
        
        }        
    }                                   

    private void a31ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[3][1] = jogada;
        
        a31.setEnabled(false);
        
        
        a31.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
             else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }           
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
        
        }        
    }                                   

    private void a32ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[3][2] = jogada;
        
        a32.setEnabled(false);
        
        
        a32.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
            }
            else if(win.equals(simbolo2)){
                win = nome2;
            }
            else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
            }            
            JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
        
        }        
    }                                   

    private void a33ActionPerformed(java.awt.event.ActionEvent evt) {                                    
        velha.tabuleiro[3][3] = jogada;
        
        a33.setEnabled(false);
        
        
        a33.setText(jogada);
        
        if(jogada.equals(simbolo1)){
            jogada = simbolo2;
        }
        else if(jogada.equals(simbolo2)){
            jogada = simbolo1;
        }
        win = velha.checar();
        
        if(!"-1".equals(win)){
            if(win.equals(simbolo1)){
                win = nome1;
                JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
            }
            else if(win.equals(simbolo2)){
                win = nome2;
                JOptionPane.showMessageDialog(null, "VENÇEDOR: " + win);
            }
             else if(win.equals("velha")){
                JOptionPane.showMessageDialog(null, "DEU VELHA");
                
            }           
            
        
        }        
        
    }                                   

    private void nomeTela1ActionPerformed(java.awt.event.ActionEvent evt) {                                          
        
    }                                         

    private void nomeTela2ActionPerformed(java.awt.event.ActionEvent evt) {                                          
        // TODO add your handling code here:
    }                                         

    private void simboloTela2ActionPerformed(java.awt.event.ActionEvent evt) {                                             
        // TODO add your handling code here:
    }                                            

    private void iniciarTelaActionPerformed(java.awt.event.ActionEvent evt) {                                            
        nome1 = nomeTela1.getText();
        nome2 = nomeTela2.getText();
        simbolo1 = simboloTela1.getText();
        simbolo2 = simboloTela2.getText();
        
        velha.criarJogador1(nome1, simbolo1);
        velha.criarJogador2(nome2, simbolo2);
        
        
        jogada = simbolo1;
        
        nomeTela1.setEnabled(false);
        nomeTela2.setEnabled(false);
        simboloTela1.setEnabled(false);
        simboloTela2.setEnabled(false);
        iniciarTela.setEnabled(false);
        
    }                                           

    public static void main(String args[]) {

        
        
        
        
        
        
        
        
        
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Tela().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify                     
    private javax.swing.JButton a11;
    private javax.swing.JButton a12;
    private javax.swing.JButton a13;
    private javax.swing.JButton a21;
    private javax.swing.JButton a22;
    private javax.swing.JButton a23;
    private javax.swing.JButton a31;
    private javax.swing.JButton a32;
    private javax.swing.JButton a33;
    private javax.swing.JButton iniciarTela;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JTextField nomeTela1;
    private javax.swing.JTextField nomeTela2;
    private javax.swing.JTextField simboloTela1;
    private javax.swing.JTextField simboloTela2;
    // End of variables declaration                   
}
