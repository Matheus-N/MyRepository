#include <iostream>
#include <string>

using namespace std;

int main(){
    string msg;
    char chaveC[3];
    int chaveI[3];
    cout << "Informe a mensagem a ser criptografada" << endl;
    
    getline(cin, msg);
    
    cout << "Insira a Chave" << endl;
    
    cin >> chaveC;
    
    for(int i = 0; i < 3; i++){
        chaveI[i] = chaveC[i] - 97; 
    }
    

    int j = 0;
    
    for(int i = 0; i < msg.length(); i++){
        msg[i] = msg[i] + chaveI[j];
        j++;
        if(j == 4){
            j = 0;
        }
        
    }
    
    
    cout << msg << endl;
    
    
    
    
}