package estacionamento;

import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;

public class Estacionamento {
    public Vaga []listaVagas;
    
 
    
    public void adicionar(Carro carro){
        for(int i = 0; i < 20; i++){
            if (listaVagas[i] == null){
            if(i <= 12){
                System.out.println("Vá para a Vaga: E" + i);
            }
            else{
                System.out.println("Vá para a Vaga: D" + Math.abs(i - 12)); 
            
            }
            
            Vaga vaga = new Vaga();
            vaga.carro = carro;
            
            vaga.horaEntrada = Calendar.HOUR_OF_DAY;
            listaVagas[i] = vaga;
                break;
            }
        }
        
    }
    
    
    public int remover(String placa){
        int tempo;
        int preço;
        
        for(int i = 0; i < 20; i++){
   
            if(listaVagas[i] != null){
                
                if(listaVagas[i].carro.placa.equals(placa)){
                    
                    listaVagas[i].carro = null;
                    
                    tempo = Calendar.HOUR_OF_DAY - listaVagas[i].horaEntrada;
                    if(tempo == 0){
                        return 0;
                    }
                    
                    else {
                        tempo -= 1;
                        preço = 4;
                        
                        preço += tempo * 2;
                        
                        return preço;
                    }
 
                }
            }    
 
        }
    return -1;
    }
}
