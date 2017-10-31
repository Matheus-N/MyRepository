#include <iostream>

using namespace std;

void bubbleSort(int v[], int tam);

void print(int v[], int tam);

int main(){

    int v[5] = {12, 7, 11, 14, 2};
    int tam = sizeof(v) / sizeof(int);
    
    
    bubbleSort(v, tam);
    print(v, tam);
    
    return 0;
}

void bubbleSort(int v[], int tam){
    int aux;
    
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                
            }
        }
    }
    
    return;
    
}

void print(int v[], int tam){
    cout << "{";
    for(int i = 0; i < tam - 1; i++){
        cout << v[i] << ",";
    }
    cout << v[tam - 1];
    
    cout << "}";
    return;
}