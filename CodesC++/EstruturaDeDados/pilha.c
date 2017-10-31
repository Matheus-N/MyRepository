#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef int TIPOCHAVE;  // Tipochave é um inteiro ou seja TIPOCHAVE x == int x

typedef struct{
    TIPOCHAVE chave;     //Pode ser int chave
}REGISTRO;

typedef struct{
    REGISTRO reg;
}ELEMENTO;

typedef struct{
    int topo;
    ELEMENTO A[MAX];
}PILHA;


void inicializarPilha (PILHA *p){
    p->topo = -1;
}

int retornarQuantidade (PILHA *p){
    return p->topo+=1;
}

void exibirPilha (PILHA *p){
    int i;
    printf("Pilha: \ ");
    for (i = p->topo ; i >= 0; i--){
        printf("%i ", p->A[i].reg.chave);
    }
}

int inserirNumero (PILHA *p, REGISTRO reg){
    if (p->topo >= MAX-1){
        return -1;
    }
    p->topo += 1;
    p->A[p->topo].reg = reg;
    return 0;
}

int excluirNumero (PILHA *p){
    if (p->topo == MAX-1){
        return -1;
    }
    p->topo-=1;
    return 0;
}

void reinicializar (PILHA *p){
    p->topo = -1;
}

int main(){
    PILHA p;
    REGISTRO reg;
    inicializarPilha(&p);
    reg.chave=10;
    inserirNumero(&p, reg);
    exibirPilha(&p);

return 0;
}