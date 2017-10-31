#include <iostream>
#include <vector>
#include "split.hpp"

using namespace std;

void achar (int cep){
    fstream arq;
    
    string linha;
    
    arq.open("cidades.txt", ios::in | ios::out | ios::app);
    
    while(!arq.eof()){
        
        cin.ignore();
        
        getline(arq, linha);
        
        
        vector<string> v = split(linha, ';');
        
        if(cep >= v[1] && cep <= v[2] ){
            cout << v[0];
        }
        
        
    }
    
    
    
}

int main (){
    int cep;
    
    string cidade;
    
    bool achou = false;
    
    cin >> cep;
    
    

        
    achar(cep);
    
    
    
}

