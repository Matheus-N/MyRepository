#include <iostream>

using namespace std;

int main(){
    int x;
    string a, b;
    
    cin >> x;
    
    while (x > 0){
        cin >> a;
        cin >> b;
        
        if(a == "ataque"){
            if(b == "pedra"){
                cout << "Jogador 1 venceu" << endl;
            }
            else if(b == "ataque"){
                cout << "Aniquilacao mutua" << endl;
            }
            
            else if(b == "papel"){
                cout << "Jogador 1 venceu" << endl;
            }
        }
        
        else if(a == "pedra"){
            if(b == "papel"){
                cout << "Jogador 1 venceu" << endl;
            }
            
            else if(b == "pedra"){
                cout << "Sem ganhador" << endl;
            }
            
            else if(b == "ataque"){
                cout << "Jogador 2 venceu" << endl;
            }
        }
        
        else if(a == "papel"){
            if(b == "ataque"){
                cout << "Jogador 2 venceu" << endl;
            }
            
            else if(b == "papel"){
                cout << "Ambos venceram" << endl;
            }
            
            else if(b == "pedra"){
                cout << "Jogador 2 venceu" << endl;
            }
        }
        
        x--;
    }
    
}