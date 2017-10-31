#include <stdio.h>


void troca(int vetor[], int i, int j){
    int aux;
    
    aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

void quickSort(int vetor[], int inicio, int fim){
    
    int pivo, meio;
    meio = (inicio + fim) / 2;
    pivo = vetor[meio];
    
    int i, j;
    
    i = inicio;
    j = fim;
    
    do{
        
        while(vetor[i] < pivo){
            i++;
        }
        while(vetor[j] > pivo){
            j--;
        }
        
        
        if(i <= j){
            troca(vetor, i, j);
            i++;
            j--;
        }
        
        
    
    }while(i < j);
    
    if(inicio < j){
        quickSort(vetor, inicio, j);
    }
    if(fim > i){
        quickSort(vetor, i, fim);
    }
    
    
}


int main(){
    
    int vetor[10] = {5, 6, 2, 3, 7, 9, 1, 8, 4, 10};
    
    quickSort(vetor, 0, 9);
    
    int i;
    
    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    
}