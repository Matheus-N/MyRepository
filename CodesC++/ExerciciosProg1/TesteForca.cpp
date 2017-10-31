#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cctype>

using namespace std;         //AGORA TEM Q ARRUMAR O BANG DO UPPERCASE(LINHA 110) E AUMENTAR O NUM DE PALAVRAS E COLOCAR ELAS EM ORDEM DE TIPO, PRA DPS DAR UMA DICA PRO USUARIO

void desenho(int);

void vitoria();

void derrota();

void inicio();

bool jogarNovamente();



int main(){

    #define TAMPOOL 10    // NUMERO DE PALAVRAS NO ARRAY POOL
    #define TAMUSADAS 33 //ENTRADAS POSSIVEIS


    int error = 0,random, hit = 0;
    char letra, digito;
    bool acerto = false,final = false, acerto2 = false, usada = false;
    string pool[TAMPOOL] = {"bacon", "palavra", "coxinha", "informatica", "ornitorrinco", "ciencia", "pizza", "programador", "cafe", "cafeina"}; // COLOCAR UMA PALAVRA = AUMENTAR O TAMPOOL
    string word;
    int j = 0;                  //contador para palavras usadas
    char usadas[TAMUSADAS] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',};     //array para palavras usadas, TENTA OTIMIZAR ISSO PLMDDS

    inicio();

    srand (time(NULL));
    random = rand() % TAMPOOL;

    word = pool[random];


    int t = word.length();

    char display[t];

    for(int i = 0; t > i; i++){
        display[i] = {'_'};
    }

    cout << " >>>>>> JOGO DA FORCA <<<<<<< " << endl << endl << endl;           //COMEï¿½O

    cout << "Sua palavra tem " << t << " letras!" << endl;


    desenho(error);

    



    for(int i = 0; i < t; i++){                             //INICIALIZA O DISPLAY
            cout << " " << display[i];
    }
    cout << endl;

    cout << "Letras usadas: ";

    for(int i = 0; usadas[i] != '0'; i++){                  //INFORMA AS LETRAS QUE FORAM USADAS
        cout << usadas[i] << " ";
    }




    cout << endl << "Informe uma letra: ";

    cin >> letra;

    if((letra > 'a' && letra < 'z') || (letra > 'A' && !letra < 'Z')){

    }

    else{
        system("clear");
        cout << "ENTRADA INVALIDA!!" << endl;
        desenho(error);
    }


    system("clear");

    putchar (tolower(letra));             //  <<<<<<<<<<<< Nï¿½O FUNCIONA - TRANFORMAR UPPERCASE EM LOWERCASE
    
    cout << endl;

    for(int i = 0; i < TAMUSADAS; i++){                            //VE SE A LETRA JA FOI USADA
        if(letra == usadas[i]){
            usada = true;
        }
    }

    if(usada){
        cout << "Voce ja usou essa letra!" << endl;
        usada = false;
        desenho(error);
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
                vitoria();
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
            cout << "Que pena, vocï¿½ errou" << endl;
            error++;

            if(6 - error > 0){
                cout << "Voce ainda tem " << 6 - error << " tentativas!" << endl;
            }
        }

        acerto2 = false;

        if(error > 5){
            derrota();
        }

                                     

    char c;
    
    cin>>c;

    if(jogarNovamente()){ 
        inicio();  
    }else{
      return 0;
    };


}

void vitoria(){
  cout << "PARABENS VOCE GANHOU!!" << endl;       //TELA DE VITORIA

  cout << " ___________" << endl << "|" << endl << "|" <<
  endl << "|" << endl << "|         \\O/" << endl <<
  "|          |" << endl << "|         / \\" << endl;
  jogarNovamente();

}
void derrota(){ 
  cout << "GAME OVER" << endl;

  cout << " ___________" << endl << "|          |" << endl <<
  "|" <<    "          O" << endl << "|" << "         /" << "|" << "\\" <<
  endl << "|" << "         /" << " \\" << endl << "|" << endl << "|";
  
  jogarNovamente();

}
bool jogarNovamente(){ 
    char digito;    
    cout << "JOGAR NOVAMENTE? [s] para continuar / [n] terminar" << endl;  
  cin >> digito;
  if(digito == 's' || digito == 'S'){
      return true;
  }

  else if(digito == 'n' || digito == 'N'){
    return false;
  }


}

void desenho(int error){
    cout << " ___________" << endl << "|          |" << endl << "|";      //DESENHOOOO <<<<<<<<<<<<<<<<<<<<<<

    if(error > 0){
        cout <<    "          O";
    }

    cout << endl << "|";

    if(error > 2){
        cout << "         /";
    }

    if(error == 2){
        cout << "          ";
    }

    if(error > 1){
        cout << "|";
    }

    if(error > 3){
        cout << "\\";
    }

    cout << endl << "|";

    if(error > 4){
        cout << "         /";
    }

    if(error > 5){
        cout << " \\";
    }

    cout << endl << "|" << endl << "|";

    
    
}

void inicio(){
    
}