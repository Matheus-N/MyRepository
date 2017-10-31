#include <stdio.h>
#include <stdlib.h>

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
}REGISTRO;

typedef struct aux {
    REGISTRO reg;
    struct aux* anterior;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
    PONT inicio;
    PONT fim;
}LISTA;


void iniciarLista(LISTA *l){
    l->inicio = NULL;
    l->fim = NULL;
}

int tamanhodaLista(LISTA *l){
    int tamanho = 0;
    PONT p = l->inicio;
    while(p != NULL){
        tamanho++;
        p = p->prox;
    }
    return tamanho;
}

PONT buscaSequencialExc(LISTA *l, TIPOCHAVE ch, PONT *ant){
    *ant = NULL;
    PONT atual = l->inicio;
    while(atual != NULL && atual->reg.chave < ch){
        *ant = atual;
        atual = atual->prox;
    }
    return atual;
}

int inserirListaOrdenada(LISTA *l, REGISTRO reg){
    TIPOCHAVE ch = reg.chave;
    PONT ant = NULL;
    PONT i=NULL, at=NULL;
    at = buscaSequencialExc(l, ch, &ant);
    if(at != NULL && at->reg.chave == ch){
        return -1;
    }
    at = (PONT) malloc(sizeof(ELEMENTO));
    inicializaPonteiro(at);
    at->reg = reg;
    if(ant == NULL){
        at->prox = l->inicio;
        if(l->inicio != NULL){
            l->inicio->anterior = at;
        }
        l->inicio = at;
        if(at->prox == NULL){
            l->fim = at;
        }
    }
    else{
        at->prox = ant->prox;
        if(ant->prox != NULL){
            ant->prox->anterior = at;
        }
        at->anterior = ant;
        ant->prox = at;
        if(at->prox == NULL){
            l->fim = at;
        }
    }
    return 0;
}
void inicializaPonteiro(PONT p){
    p->anterior = NULL;
    p->prox = NULL;
}

int excluirElementodaLista(LISTA *l, TIPOCHAVE ch){
    PONT ant = NULL;
    PONT atual = NULL;
    atual = buscaSequencialExc(l, ch, &ant);
    if(atual == NULL){
        return -1;
    }
    if(ant == NULL){
        l->inicio = atual->prox;
        atual->prox->anterior = NULL;
    }else if(atual->prox != NULL){
        ant->prox = atual->prox;
        atual->prox->anterior = ant;

    }else{
        l->fim = ant;
        ant->prox = NULL;
    }
    free(atual);
    return 0;
}

void exibirLista(LISTA *l){
    PONT p = l->fim;
    if(tamanhodaLista(l) != 0){
        printf("Lista:");
    }else{
        printf("Lista:|LISTA VAZIA");
    }
    while(p != NULL){
        printf("|%d", p->reg.chave);
        p = p->anterior;
    }
    printf("|");
}

int quantidadeElemMostrar(LISTA *l){
    int tamanho = 0;
    PONT p = l->inicio;
    printf("Lista:");
    while(p != NULL){
        tamanho++;
        printf("|%d", p->reg.chave);
        p = p->prox;
    }
    return tamanho;
}

void exibirListaInicio(LISTA *l){
    PONT p = l->inicio;
    if(tamanhodaLista(l) != 0){
        printf("Lista:");
    }else{
        printf("Lista:|LISTA VAZIA");
    }
    while(p != NULL){
        printf("|%d", p->reg.chave);
        p = p->prox;
    }
    printf("|");
}

void reinicializarLista(LISTA *l){
    PONT end = l->inicio;
    while(end != NULL){
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }
    l->inicio = NULL;
}

void exibirLisalista(LISTA *l){
    int a = tamanhodaLista(l);
    PONT p = l->inicio;
    if(tamanhodaLista(l) != 0){
        printf("Lista:");
    }else{
        printf("Lista:|LISTA VAZIA");
    }
    while(a != 0){
        printf("|%d", p->reg.chave);
        p = p->prox;
        a--;
    }
    printf("|");
}

