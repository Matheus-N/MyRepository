#include <stdio.h>
#include <stdlib.h>

#define MAX 50
#define INVALIDO -1

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO reg;
    int prox;
}ELEMENTO;

typedef struct{
    ELEMENTO A[MAX];
    int inicio;
    int dispo;
}LISTA;

int excluirElementosPares(LISTA *l){
    int ant = INVALIDO;
    int i = l->inicio;
    if(l->dispo == INVALIDO){
        return INVALIDO;
    }
    while(i != INVALIDO){
        if(A[i].reg.chave % 2 == 0){
            l->A[ant].prox = l->A[i].prox;
        }
        ant = i;
        i = l->A[i].prox;
    }

}

int main(){
    return 0;
}
