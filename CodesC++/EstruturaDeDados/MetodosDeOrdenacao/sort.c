#include <stdio.h>
#include <stdlib.h>

void insertionSort(int vetor[], int tam) {
	int i, j, aux;

	for (i = 1; i < tam; i++) {
		aux = vetor[i];
		j = i - 1;

		while ((j >= 0) && (aux < vetor[j])) {
			vetor[j + 1] = vetor[j];
			j = j - 1;
		}

		vetor[j + 1] = aux;
	}

}


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