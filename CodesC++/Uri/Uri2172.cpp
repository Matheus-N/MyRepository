#include <iostream>

using namespace std;

int main(){
    long y;
    long x;
    
    cin >> x >> y;
    
    while(x != 0 && y != 0){
        y = y * x;
        
        cout << y << endl;
        
        cin >> x >> y;
        
    }
    
    
    
    
    
    
}