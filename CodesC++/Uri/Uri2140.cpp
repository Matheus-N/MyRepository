#include <iostream>

using namespace std;

int main(){
   int valor, pago, troco;
   
   cin >> valor >> pago;
   
   while(valor != 0 && pago != 0){
        bool fail = false;
        int notas = 0;
        troco = pago - valor;
        
        
        while(troco >= 100){
            troco -= 100;
            notas++;
            if(notas > 2){
                goto fail;
            }
        }
        
        while(troco >= 50){
            troco -= 50;
            notas++;
            if(notas > 2){
                goto fail;
            }
        }        
        
        while(troco >= 20){
            troco -= 20;
            notas++;
            if(notas > 2){
                goto fail;
            }
        }        
        
        while(troco >= 10){
            troco -= 10;
            notas++;
            if(notas > 2){
                goto fail;
            }
        }        
        
        while(troco >= 5){
            troco -= 5;
            notas++;
            if(notas > 2){
                goto fail;
            }
        }        
        
        while(troco >= 2){
            troco -= 2;
            notas++;
            if(notas > 2){
                goto fail;
            }
        }        
        
        
        fail:
        
        
        if(notas > 2){
            cout << "impossible" << endl;
        }
        else{
            cout << "possible" << endl;
        }
        
       
       cin >> valor >> pago;
   }
   
   
}