#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    
    while (x != 0){
        int v[x];
        int num = 1;
        
        for(int i = 0; i < (x / 2); i++){
            for(int j = 0; j < x; j++){
              v[i][j] = i  + num;  
            } 
            num++;
            
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        cin >> x;    //reentrada
    }
    
    
    
    return 0;
    
}