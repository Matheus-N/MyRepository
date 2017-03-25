package estacionamento;


import java.util.Scanner;

public class Main {
        public static void main(String[] args){
        Estacionamento estacionamento = new Estacionamento();
        estacionamento.listaVagas = new Vaga[20] ;
        
        
        Scanner sc = new Scanner(System.in);
        
            
            
            
        int code;
        
        while(true){
        
            System.out.println("Digite o codigo da função desejada: ");
            System.out.println("1 - Adicionar Carro");
            System.out.println("2 - Retirar Carro");
            System.out.println("3 - Finalizar o Programa");
            
            code = sc.nextInt();
            sc.nextLine();
            
            
            if(code == 1){
                System.out.println("Informe a placa");
                String placa = sc.nextLine();
                Carro carro = new Carro();
                carro.placa = placa;
                estacionamento.adicionar(carro);
            }
            
            else if(code == 2){
                int preço;
                System.out.println("Informe a placa");
                String placa = sc.nextLine();
                preço = estacionamento.remover(placa);
                
                if(preço == -1){
                    System.out.println("Placa não encontrada");
                }
                else{
                    System.out.println("Total: " + preço);
                }         
            }
            
            else if(code == 3){
                break;
            }
            
        
        }
         
       
            
        
    
        }
    }  
    

