package carro;


public class Carro {

    int ano;
    int velocidade;
    boolean motor;
    
    
    public Carro(){
        ano = 2017;
        velocidade = 0;
        
    }
    
    void ligar(){
        motor = true;
    }
    
    void desligar(){
        if(velocidade == 0){
            motor = false;
        }
    }
    
    void acelerar(){
        if(velocidade < 160){
            velocidade += 10;
        }
    }
    
    void frear(){
        if(velocidade > 0){
            velocidade -= 10;
        }
    }

    public static void main(String[] args) {
        Carro carro = new Carro();
        carro.ano = 2017;

      

    }
}
