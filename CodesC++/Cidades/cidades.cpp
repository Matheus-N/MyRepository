#include <iostream>
#include <fstream>
#include <cstdlib>
#include "split.cpp"

using namespace std;


bool procurar(int);

int main(){
    int cep;
    
    string cidade;
    
    bool achou = false;
    
    cin >> cep;
    
    
    fstream arq;
    
    arq.open("cidades.txt", ios::in | ios::out | ios::app);
    
    while(!achou){
        achou = procurar(cep);     
    }
    
    
    
}

bool procurar(int cep){
    
    separar();
    
    
}