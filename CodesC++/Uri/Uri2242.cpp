#include <iostream>

using namespace std;

int main(){
    string risada;
    char f[50] = {0};
    char t[50] = {0};
    bool certo = true;
    
    getline(cin, risada);
    
    int j = 0;
    
    for(int i = 0; i <= risada.length(); i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            f[j] = risada[i];
            j++;
        }
    }
    
    j = 0;
    
    for(int i = risada.length(); i >= 0; i--){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            t[j] = risada[i];
            j++;
        }        
    }
    
    
    for(int i = 0; i < 50; i++){
       if(t[i] != f[i]){
           certo = false;
       }
    }
    
    if(certo){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
    
    
    
    
    
}