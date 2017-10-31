#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int vetor[], int tam){
    int i, j, aux;
    
    for(i = tam - 1; i > 0; i--){
        
        for(j = 0; j < i; j++){
            
            if(vetor[j] > vetor[j + 1]){
                
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                
            }
            
        }
        
    }
}