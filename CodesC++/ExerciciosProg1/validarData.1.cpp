#include <iostream>

using namespace std;

void separarData(int, int, int, string);

int main(){
    string data;
    
    int dia, mes, ano;
    
    
    getline(cin, data);
    
    separarData(&dia, &mes, &ano, data);
    
    
    
    
    
    
}


void separarData(*d, *m, *a, data){
    int j = 1;
    string dia, mes, ano;
    int diaF, mesF;
    
    for(int i = 0; i < data.length(); i++){
        if(data[i] == '/' && j == 1){
            diaF = i - 1;
            j++;
        }

        if(data[i] == '/' && j == 2){
            mesF = i - 1;
        }
    }
    
    dia = 
    
    
}