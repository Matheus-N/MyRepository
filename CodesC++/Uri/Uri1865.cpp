#include <iostream>

using namespace std;

int main(){
    int i = 0;
    string nome;
    
    cin >> i;
    cin.ignore();
    
    for(; i > 0; i--){
        getline(cin, nome);    
        if(nome[0] == 'T' && nome[1] == 'h'){
            cout << "Y" << endl;
        }
        
        else{
            cout << "N" << endl; 
            
        }
        
    }
 
    return 0;
    
}