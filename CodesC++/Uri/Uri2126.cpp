#include <iostream>

using namespace std;

int main(){
    string key, msg;
    int caso = 1;
    
    while(!cin.eof()){
        
        bool repete = false;
        
        int total = 0, pos, hits = 0;
        int j = 0;
        
        cin >> key;
        cin >> msg;
        
        for(int i = 0; i < msg.length(); i++){
            if(msg[i] == key[j]){
                hits++;
                j++;
                
            }
            
            else{
                hits = 0;
                j = 0;
            }
            
            
            
            if(hits == key.length()){
                j = 0;
                total++;
                repete = true;
                hits = 0;
                pos = (i + 2) - key.length();
            }
        }
        
        
        
        cout << "Caso #" << caso << ":" << endl;
        if(!repete){
            cout << "Nao existe subsequencia" << endl;
        }
        
        else{
            cout << "Qtd.Subsequencias: " << total << endl;
            cout << "Pos: " << pos << endl;
        }
        
        repete = false;
        caso++;
        
    }    
}