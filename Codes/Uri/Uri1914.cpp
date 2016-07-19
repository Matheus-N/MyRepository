#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int x;
    string name1, name2, jogada1, jogada2;
    string msg;
    cin >> x;
    //cin.ignore();
    
    for(int i = 0; i < x; i++){
        int j = 0;
        getline(cin, msg);
        
        for(; !isspace(msg[j]); j++){
            name1[j] = msg[j]; 
        }
         
        for(j++; !isspace(msg[j]); j++){
            jogada1[j] = msg[j]; 
        }         
         
        for(j++; !isspace(msg[j]); j++){
            name2[j] = msg[j]; 
        }         
         
        for(j++; !isspace(msg[j]) || j < msg.length(); j++){
            jogada2[j] = msg[j]; 
        }         
         
         
         
            
        cout << name1 << endl;
        cout << jogada1;
        
        
        
    }
 
    return 0;
    
}