#include <iostream>

using namespace std;

int main(){
    
    int ano, mes, dia, total;
    
    
    
    cout << "Informe sua idade (ano)" << endl;
    
    cin >> ano;
    
    cout << "Informe sua idade (mes)" << endl;    
    
    cin >> mes;
    
    cout << "Informe sua idade (dia)" << endl;    
    
    cin >> dia;
    
    total = dia;
    
    mes += ano * 12;
    
    total += mes * 30;
    
    
    cout << "Sua idade em dias: " << total << " dias" << endl;
    
    return 0;
    
    
}