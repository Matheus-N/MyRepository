#include <iostream>

using namespace std;

int main(){
    int p, j1, j2, r, a, result;
    
    cin >> p >> j1 >> j2 >> r >> a;
    
    result = (j1 + j2) % 2;
    
    if(r == 1){
        if(a == 1){
            cout << "Jogador 2 ganha!" << endl;
        }
        
        else{
            cout << "Jogador 1 ganha!" << endl;
        }
    }
    
    else if (a == 1){
        cout << "Jogador 1 ganha!" << endl;
    }
    
    else{
        if(p == 1){
            if(result == 0){
                cout << "Jogador 1 ganha!" << endl;
            }
            
            else{
                cout << "Jogador 2 ganha!" << endl;
            }
        }
        
        else{
            if(result == 0){
                cout << "Jogador 2 ganha!" << endl;
            }
            
            else{
                cout << "Jogador 1 ganha!" << endl;
            }            
        }
        
        
        
    }
    
    
}