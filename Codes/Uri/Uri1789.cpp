#include <iostream>

using namespace std;

int main(){
    int i, x, maior = 0;
    cin >> i;
    while(!cin.eof()){
        while(i > 0){
            cin >> x;
            if (x > maior){
                maior = x;
            }
            
            i--;
        }
        
        if(maior < 10){
            cout << 1 << endl;
        }
        
        else if(maior >= 20){
            cout << 3 << endl;
        }
        
        else{
            cout << 2 << endl;
        } 
        maior = 0;
        cin >> i;
    }    
        
    
    
    return 0;
    
}