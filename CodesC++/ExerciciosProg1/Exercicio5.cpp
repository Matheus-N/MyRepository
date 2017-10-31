#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double preco, total = 0;
    
    cout << fixed << setprecision(2);
    
    cout << "Informe o custo de frabrica do carro" << endl;
    
    cin >> preco;
    
    total = preco + (preco * 0.28) + (preco * 0.45);
    
    cout << "O custo ao consumidor do carro: " << total << " Reais" << endl;
    
    
    return 0;
    
    
}