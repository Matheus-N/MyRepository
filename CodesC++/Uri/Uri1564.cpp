#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int main(){
    int x;
    
    cin >> x;
    
     while (!cin.eof()){
        
        
        if (x != 0) {
            cout << "vai ter duas!" << endl;
        }
        
        else{
            cout << "vai ter copa!" << endl;
            
        }
        cin >> x;
        
    }
    
    return 0;
    
    
}