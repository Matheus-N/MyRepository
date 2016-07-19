#include <iostream>

using namespace std;

int main(){
    int t, x, menor = 1000,posicao = 0;
    
    cin >> t;
    
    for(int i = 1; i <= t; i++){
        cin >> x;
        if(x < menor){
            menor = x;
            posicao = i;
        }
        
    }
    
    cout << posicao << endl;
    
    return 0;
    
}