#include <stdio.h>
#include <stdlib.h>

void selection_sort(int vetor[], int tam){ 
  int i, j, min, aux;
  
  for (i = 0; i < (tam-1); i++){
      
     min = i;
     
     for (j = (i+1); j < tam; j++){
       if(vetor[j] < vetor[min]){ 
         min = j;
       }
     }
     
     if (i != min){
       aux = vetor[i];
       vetor[i] = vetor[min];
       vetor[min] = aux;
     }
     
  }
}