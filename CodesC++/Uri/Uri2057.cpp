#include <iostream>

using namespace std;

int main(){
    int hora, fuso, viagem;
    
    cin >> hora >> fuso >> viagem;
    
    if(hora == 0){
        hora = 24;
    }
    
    
    hora += fuso + viagem;
    
    while(hora >= 24){
        hora -= 24;
    }
    
    
    cout << hora << endl;
}