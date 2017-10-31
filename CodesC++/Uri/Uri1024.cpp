#include <iostream>
#include <string>

using namespace std;

int main(){
    char code;
    
    bool ativo = false;
    
    string text;
    
    cin >> code;
    cin.ignore();
    getline(cin, text);
    
    while(code != '0' && text[0] != '0'){
    
        for(int i = 0; i < text.length(); i++){
            if(text[i] != code && text[i] != '0'){
                ativo = true;
            }
            
            if(ativo && text[i] != code){
                cout << text[i];
            }
            
        }
        
        if(!ativo){
            cout << "0";
            
            
        }
        
        
        cout << endl;
        
        ativo = false;
        cin >> code;
        cin.ignore();
        getline(cin, text); 
        
    }
    
    
    return 0;
    
    
}