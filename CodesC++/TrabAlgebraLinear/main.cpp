#include <iostream>
#include <string>

using namespace std;

void codificar();

void decodificar();

int main(){
    
    int opc = 0;
    
         while(1){
        
        cout << "[1] - Codificar mensagem" << endl;
        cout << "[2] - Decodificar mensagem" << endl;
        cout << "[3] - Sair" << endl;
        
        cin >> opc;
        
        if(opc == 1){
            codificar();
        }
        
        else if(opc == 2){
            decodificar();
        }
        
        else if(opc == 3){
            break;
        }
        
        else{
            cout << "Entrada Invalida" << endl;
        }
        
    }
    
    return 0;
}

void codificar(){
    int c1, c2;
    string msgS;   
    
    cout << "Informe o tamanho da matriz chave: (exemplo 2x2 = 2 'enter' 2) ";
    
    cin >> c1 >> c2;

    int chave[c1][c2];
            
    cout << "Informe a matriz chave (esquerda pra direita, de cima pra baixo)" << endl;
    
    for(int i = 0; i < c1; i++){
        for(int j = 0; j < c2; j++){
            cin >> chave[i][j];        
        }
    }
 
    
 
   cout << "Informe a mensagem a ser codificada" << endl;
   
   cin.ignore();
   
   getline(cin, msgS);
   
   int aux;
   
   for(;1;){                                    // COMPLETAR A MENSAGEM COM UNDERLINE
       if((msgS.length() % c2) != 0){
           msgS += "_";
       }
       else{
           aux = (msgS.length() / c2);
           break;
       }
   }
   
   cout << msgS <<endl;
   
   
   int msgI[2][aux];
   
   int k = 0;
   
   for(int i = 0; i < 2; i++){              //TRANSFORMAR MENSAGEM EM NUMEROS
        for(int j = 0; j < aux; j++){
            if(msgS[k] == '.'){
                msgI[i][j] = 27;
            }       
            else if(msgS[k] == ','){
                msgI[i][j] = 28;
            }         
            else if(msgS[k] == '_'){
                msgI[i][j] = 29;
            }         
            else if(msgS[k] == '¬'){
                msgI[i][j] = 30;
            }         
            else{
                msgI[i][j] = msgS[k] - 96;
            }
            k++;
        }    
   }

       for(int i = 0; i < 2; i++){                     
       for(int j = 0; j < aux; j++){
           cout << msgI[i][j] << "  *" << endl;
       }
    }
    
   int msgF[c2][aux];
   
   for(int i = 0; i < c2; i++){                    // INICIALIZAR MATRIZ
      for(int j = 0; j < aux; j++){
        msgF[i][j] = 0;
      }    
   }
   
   
    
   for(int i = 0; i < 2; i++){                     // MULTIPLICAR AS MATRIZES 
        for(int j = 0; j < aux; j++){
            for(int k = 0; k < c2; k++){
                msgF[i][j] += chave[i][k] * msgI[k][j];
            }   
        }   
    }
    
 
    
    
    cout << "MENSAGEM CODIFICADA: " << endl << endl;
    
    for(int i = 0; i < 2; i++){                             // SAIDA COM A MENSAGEM CODIFICADA
        for(int j = 0; j < aux; j++){
            cout << msgF[i][j] << "  ";
        }
        cout << endl;
    }

    
    
}




void decodificar(){
  float matriz_Resultado[n][n];
       for(int i=0;i<n;i++){   
            for(int j=0;j<colunasCod;j++){
                matriz_Resultado[i][j] = 0;
            }
        }

        for(int i=0; i<n; i++){
            for(int j = 0; j<colunasCod;j++){
                for (int aux = 0; aux < n; aux++) {
                    matriz_Resultado[i][j] += matrizInversa[i][aux] * matriz_Codificada[aux][j];
               }
            }
        }

     cout << "Matriz Decodificada: " << endl;
         for(int i=0;i<n;i++){
            for(int j=0;j<colunasCod;j++){
                cout << matriz_Resultado[i][j] << "\t";
            }
            cout << endl;
        }
         cout << endl;

        //Transformando Resultado em letras;
        char letra[50];
        int x=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<colunasCod;j++){
                letra[x] = matriz_Resultado[i][j] + 64;
                x++;
            }
        }

        for(int i=0; i<50; i++){
            cout << letra[i];
        }
        cout << endl;
}
