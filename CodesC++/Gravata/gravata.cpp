#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void menu();

void escGravata();

bool analisar(string);

void exibir();

int main(){
    
    menu();    
 
 
    return 0;
    
}

void menu(){
    
    int opc;
    
    do{
        cout << "Escolher gravata [1]" << endl;
        cout << "Mostrar gravatas usadas [2]" << endl;
        cout << "Sair[3]" << endl;
        
        cin >> opc;

        system("clear");        
        
        switch(opc){
            case 1: escGravata();
            break;
            
            case 2: exibir();
            break;
            
            
        }
    
    }while(opc != 3);
    

}

void escGravata(){
    string cor;
    
    bool achou = false;
    
    cout << "Informe a cor da gravata" << endl;
    
    cin.ignore();
    
    getline(cin, cor);
    
    
    system("clear");
    
    achou = analisar(cor);
    
    if(!achou){
        cout << "Pode usar!!" << endl;
        
        fstream arq;
        
        arq.open("gravata.txt", ios::in | ios::out | ios::app);
        
        arq << cor << endl;
        
        arq.close();
    }
    else{
        cout << "Não pode usar!!" << endl;
    }
    
}

bool analisar(string cor){
    string aux;
    
    bool achou = false;
    
    fstream arq;
    
    
    arq.open("gravata.txt", ios::in | ios::out | ios::app);
    
        while(!arq.eof()){
            getline(arq, aux);
            
            if(aux == cor){
                achou = true;
            }
        }
    
    arq.close();
    
    return achou;
    
    
    
}


void exibir(){
    string aux;
    
    fstream arq;
    
    
    cin.ignore();
    
    arq.open("gravata.txt", ios::in | ios::out | ios::app);
    
        while(!arq.eof()){
            getline(arq, aux);
            
            cout << aux << endl;
            
        }
    
    arq.close();
}
