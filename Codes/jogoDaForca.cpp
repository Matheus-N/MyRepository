#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;                // DEPOIS DA UMA OLHADA NAS MUDANÇAS Q EU FIZ AE, AGORA TEM Q FAZER O BONECO LA E LIMPAR A TELA

int main(){
    
    #define TAMPOOL 5    // NUMERO DE PALAVRAS NO ARRAY POOL
    
    denovo:;
    
    int error = 0,random, hit = 0;
    char letra, digito;
    bool acerto = false,final = false, acerto2 = false, usada = false;
    string pool[TAMPOOL] = {"bacon","palavra","coxinha","trombadinha","ornitorrinco"}; // COLOCAR UMA PALAVRA = AUMENTAR O TAMPOOL
    string word;
    int j = 0;                  //contador para palavras usadas
    char usadas[33] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',};     //array para palavras usadas, TENTA OTIMIZAR ISSO PLMDDS
    
    
    srand (time(NULL));
    random = rand() % TAMPOOL;
    
    word = pool[random];
    
    
    int t = word.length();
    
    char display[t];
    
    for(int i = 0; t > i; i++){
        display[i] = {'_'};
    }
    
    cout << " >>>>>> JOGO DA FORCA <<<<<<< " << endl << endl;           //COMEÇO
    
    cout << "Sua palavra tem " << t << " letras!" << endl;
    
    start:
        
    for(int i = 0; i < t; i++){                             //INICIALIZA O DISPLAY
            cout << " " << display[i];
    }
    cout << endl;
    
    cout << "Letras usadas: ";
    
    for(int i = 0; usadas[i] != '0'; i++){                  //INFORMA AS LETRAS QUE FORAM USADAS
        cout << usadas[i] << " ";
    }
    
    cout << endl;
    
    input:;                                                 
    
    cout << endl << "Informe uma letra: ";
    
    cin >> letra;
    
    cout << endl;
    
    for(int i = 0; i < 32; i++){                            //VE SE A LETRA JA FOI USADA
        if(letra == usadas[i]){
            usada = true;
        }
    }
    
    if(usada){
        cout << "Voce ja usou essa letra!" << endl;
        usada = false;
        goto input;
    }
    
    else {
        usadas[j] = letra;
        j++;
    }
    
    for(int i = 0; i<t; i++){                               //VE SE O USUARIO ACERTOU
        if(letra == word[i]){
            
            acerto = true;
            acerto2 = true;
            hit++;
            if(hit >= t){
                goto win;
            }
        }
        if(acerto){
            display[i] = word[i];
        }
        acerto = false;
    }
        if(acerto2){
            cout << "Voce acertou!!" << endl;
            
        }
        
        else if(!acerto2){
            cout << "Que pena, você errou" << endl;
            error++;
            
            if(6 - error > 0){
                cout << "Voce ainda tem " << 6 - error << " tentativas!" << endl;   
            }
        }
        
        acerto2 = false;
        
        if(error > 5){                      
            goto gameOver;
        }
    
    
    
    
    
    goto start;
    
    gameOver:;                                  //TELA DE GAME OVER
    
    cout << "GAME OVER" << endl;
    
    goto pergunta;
    
    return 0;
    
    
    
    win:;
    
    cout << "PARABENS VOCÊ GANHOU!!" << endl;       //TELA DE VITORIA
    
    pergunta:;
    
    cout << "JOGAR NOVAMENTE? [s] para continuar/ [n] terminar" << endl;    //PERGUNTA SE O USUARIO QUER JOGAR DENOVO
    cin >> digito;
    
    if(digito == 's' || digito == 'S'){
        goto denovo;
    }
    
    else if(digito == 'n' || digito == 'N'){
        return 0;
    }
 
    else{
        cout << "Comando invalido" << endl;
        goto pergunta;
    }
}
