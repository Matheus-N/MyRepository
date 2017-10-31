#include <iostream>

using namespace std;

int potencia(int, int);
//int par(int);
//bool bissexto(int);
//bool data(int, int, int);

int main(){
    int opc;
    int x, y, result;
    
    cout << "Selecione a opção:  \nCalcular Potencia[1]\nVer se o numero é par[2]\nVer se o ano é bissexto[3]\nValidar data[4]" << endl;
    
    cin >> opc;
    
    if(opc == 1){
        cout << "Informe a base" << endl;
        cin >> x;
        cout << "Informe a exponte" << endl;
        cin >> y;
        result = potencia(x, y);
        cout << "Resultado: " << result;
    }
    
    else if(opc == 2){
     //   par();
    }
    
    else if(opc == 3){
     //   bissexto();
    }
    
    else if(opc == 4){
    //    data();
    }
    
    
    
}


int potencia(int x, int y){
    int r = x;
    y--;
    
    for(; y > 0; y--){
        r += x * r;
        
    }
    

    
    return r;
    
}