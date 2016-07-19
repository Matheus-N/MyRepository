#include <iostream>

using namespace std;

int main(){
    int altura, canos;
    
    cin >> altura >> canos;
    
    int v[canos];
    
    
    for(int i = 0; i < canos; i++){
        cin >> v[i];
    }
    
    
    
    
    for(int i = 0; i < canos - 1 ; i++){
        if((v[i + 1] - v[i]) > altura || v[i] - v[i + 1] > altura){
            cout << "GAME OVER" << endl;
            goto fim;
        }
        
    }
    
    
    cout << "YOU WIN" << endl;
    
    
    fim:;
    
    return 0;
}