#include <iostream>
#include <string>

using namespace std;

int main(){
    
    while(!cin.eof()){
    
        int x, linhas = 1, chars = 0, maxLinhas, maxChars, paginas = 1;
         
        cin >> x >> maxLinhas >> maxChars;
        
        string palavra[x];
        
        for(int i = 0; i < x; i++){
            cin >> palavra[i];
        }
        
        
        
        for(int i = 0; i < x; i++){
            if((palavra[i].length() + chars) <= maxChars){
                chars += palavra[i].length();
                if(chars < maxChars){
                    chars++;
                }
            }
            
            
            
            else{
                linhas++;
                chars = 0;
                chars =+ palavra[i].length();
                chars++;
            }
            
        }
        
        for(; linhas > maxLinhas; paginas++){
            linhas -= maxLinhas;
        }
        
        cout << paginas << endl;
    }    
}