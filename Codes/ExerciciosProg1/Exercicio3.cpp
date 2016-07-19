#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double nota1, nota2, nota3, total = 0;
    
    cout << fixed << setprecision(2);
    
    cout << "Informe a nota da primeira prova" << endl;
    
    cin >> nota1;
    
    cout << "Informe a nota da segunda prova" << endl;
    
    cin >> nota2;
    
    cout << "Informe a nota da terceira prova" << endl;
    
    cin >> nota3;
    
    total = (nota1 * 2) + (nota2 * 3) + (nota3 * 5);
    
    total = total / 10;
    
    
    cout << "Sua media final: " << total;
    
    return 0;
    
    
}