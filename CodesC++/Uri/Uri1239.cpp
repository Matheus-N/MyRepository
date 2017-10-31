#include <iostream>

using namespace std;

int main(){
    string x;
    
    while(!cin.eof()){
        getline(cin, x);
        
        bool ita = false;
        bool neg = false;
        
        for(int i = 0; i < x.length(); i++){
            if(x[i] == '_'){
                if(!ita){
                    cout << "<i>";
                    ita = true;
                }
                else{
                    cout << "</i>";
                    ita = false;
                }
            }
            
            else if(x[i] == '*'){
                if(!neg){
                    cout << "<b>";
                    neg = true;
                }
                else{
                    cout << "</b>";
                    neg = false;
                }
                
                
                
            }
            
            else{
                cout << x[i];
            }
            
            
        }
        
        
        
        //cout << endl;
        
    }
    
   // cout << endl;
    
}