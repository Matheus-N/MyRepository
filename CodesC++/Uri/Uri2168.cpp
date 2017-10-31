#include <iostream>

using namespace std;

int main(){
    int x;
    
    cin >> x;
    
    int m[x + 1][x + 1];
    
    
    for(int i = 0; i < x + 1; i++){
        for(int j = 0; j < x + 1; j++){
            cin >> m[i][j];
        }
    }
    
        
    
    for(int i  = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            int total = 0;
            if(m[i][j] == 1){
                total++;
            }
            if(m[i + 1][j] == 1){
                total++;
            }
            if(m[i][j + 1] == 1){
                total++;
            }        
            if(m[i + 1][j + 1] == 1){
                total++;
            }
            
            if(total >= 2){
                cout << "S";
            }
            else{
                cout << "U";
            }
        }
        cout << endl;
    }
    
    
    
    
    
}