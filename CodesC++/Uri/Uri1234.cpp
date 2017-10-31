#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
    
    while(!cin.eof()){
            
        
        string text;
        bool upper = true;
        
        getline(cin, text);
        
        
        for(int i = 0; i < text.length(); i++){
            text[i];
            
            if(isblank(text[i])){
                cout << text[i];
            }
            
            else{
                if(upper){
                    cout << (char)toupper(text[i]);
                    upper = false;
                }
                
                else{
                    cout << (char)tolower(text[i]);
                    upper = true;
                }
            }
        }
        
        cout << endl;
    }
}