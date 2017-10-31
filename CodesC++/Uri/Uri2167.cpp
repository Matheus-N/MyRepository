#include <iostream>

using namespace std;

int main(){
    int pos = 0, aux, x, y;
    
    cin >> y;
    
    int vel[y];
    
    for(int i = 0; i < y; i++){
        cin >> vel[i];
    }

    for(int i = 0; i < y; i++){
        if(vel[i] < vel[i-1]){
            cout << i+1 << endl;
            return 0;
        }
        
    }    
        
    cout << "0" << endl;    
    
    
}