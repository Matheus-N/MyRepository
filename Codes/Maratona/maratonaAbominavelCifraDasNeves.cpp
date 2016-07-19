#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
    string num, texto;
    
    
    cin >> num >> texto;
    
    int textoN[texto.length()];
    
    
    for(int i = 0; i < texto.length(); i++){
        textoN[i] = (int)texto[i];
        textoN[i] += atoi(&num[i]);
        cout << (char)textoN[i] << endl;
        cout << texto[i] << endl
    }  
    
    cout << texto;
    
    
}