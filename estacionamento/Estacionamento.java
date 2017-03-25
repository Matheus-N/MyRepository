package estacionamento;

import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;

public class Estacionamento {
    public Vaga []listaVagas;
    
 
    
    public void adicionar(Carro carro){
        for(int i = 0; i < 20; i++){
            if (listaVagas[i].carro.placa == ""){
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
            if(listaVagas[i].carro != null){
                if(listaVagas[i].carro.placa == placa){
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
    
   /* public void listar(){
        for(int i = 0; i < 20; i++){
            if(listaVagas[i] != null){
                System.out.println(listaVagas[i].carro.placa);
               // System.out.println(listaVagas[i].horaEntrada - Calendar.HOUR_OF_DAY);
            } 
        }
        
    
    }
    */
}
