#include <iostream>

using namespace std;

int main(){
    int ano = 0, mes = 0, dias = 0, total = 0;

    cout << "Informe sua idade em dias" << endl;    
    
    cin >> dias;
 
    for(;dias > 360;){
        ano += 1;
        dias -= 360;
    } 
 
    for(;dias > 30;){
        mes += 1;
        dias -= 30;
    }
    
    cout << "Sua idade: " << ano << " anos, " << mes << " meses, " << dias << " dias" << endl;
    
    return 0;
    
    
}