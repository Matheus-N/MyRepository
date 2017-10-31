#include <iostream>

using namespace std;

int main (){
    int senha;
    
    cin >> senha;
    
    while(!cin.eof()){
        
        senha--;
        
        cout << senha << endl;    
        
        cin >> senha;
    }
    
}