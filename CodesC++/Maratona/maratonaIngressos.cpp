#include <iostream>
#include <string>
using namespace std;

int main(){
    int ingressos = 0, contador = 1;
    string num;
    bool um = false;
    
    cin >> ingressos;
    
    int ing[ingressos];
    
    for(int i = 0; i < ingressos; i++){
        num = to_string(i);
        for(int j = 0; j < num.length(); j++){
            
            if(um == true && num[j] == '3'){
                
                ingressos++;
                um = false;
                continue;
            }
            um = false;
            
            if(num[j] == '1'){
                um == true;
            }
            
            if(num[j] == '4'){
                ingressos++;
            }

    
            
        }
        
        contador++;    
        
        
    }
    
    cout << contador;
    
    return 0;
    
    
    
    
}