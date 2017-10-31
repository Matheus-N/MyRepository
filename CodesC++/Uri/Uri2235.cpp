#include <iostream>

using namespace std;

int main(){
    int cred[3];
    int aux;
    
    for(int i = 0; i < 3; i++){
        cin >> cred[i];
    }

    
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(cred[i] > cred[j]){
                aux = cred[i];
                cred[i] = cred[j];
                cred[j] = aux;
            }
        }
    }
    
 
    if(cred[0] + cred[1] == cred[2]){
        cout << "S" << endl;
    } 
    
    else if(cred[0] == cred[2]){
        cout << "S" << endl;
    }    
    
    else if(cred[1] == cred[2]){
        cout << "S" << endl;
    }  
 
    else if(cred[0] == cred[1]){
        cout << "S" << endl;
    }  
  
    else if(cred[0] == 0 || cred[1] == 0 || cred[2] == 0){
        cout << "S" << endl;
    }  
    
    else{
        cout << "N" << endl;
    }  
 
 
 
 
 
    
}