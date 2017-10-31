#include <stdio.h>
#include <stdlib.h>

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
}REGISTRO;

typedef struct aux {
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct
    PONT inicio;
    PONT fim;
}FILA;


void inicializar(FILA *f){
    f->inicio = NULL;
    f->fim = NULL;
}



void reInicializar(FILA *f){
    PONT aux = f->inicio;
    PONT deletar;
    
    while(aux != NULL){
        deletar = aux;
        free(deletar);
        aux = aux->prox;
    }
    
    f->inicio = NULL;
    f->fim = NULL;
    
    
}

void adicionarElemento(FILA *f, REGISTRO reg){
    PONT novo;
    novo = (PONT)malloc(sizeof(PONT));

    if(f->inicio == NULL){
        
        f->inicio = novo;
        f->fim = novo;
        novo->reg = reg;
        novo->prox = NULL;
    }
    else{
        f->fim->prox = novo;
        f->fim = novo;
        novo->reg = reg;
        novo->prox = NULL;
    }
    

}

int excluirElemento(FILA *f){
    if(f->inicio == NULL){
        return -1;
    }
    
    PONT aux;
    aux = f->inicio;
    f->inicio = aux->prox;
    free(aux);
    
    return 0;
}


void exibirFila(FILA *f){
    if(f->inicio == NULL){
        printf("FILA VAZIA\n");
        return;
    }
    
    int i = 1;
    
    PONT aux = f->inicio;
    
    while(aux != NULL){
        printf("\nElemento na posicao %d : %d\n", i ,aux->reg.chave);
        aux = aux->prox;
        i++;
    }
    
 
}
void tamanhoFila(FILA *f){
    int i = 1;
    PONT aux = f->inicio;
    while(aux->prox != NULL){
        aux=aux->prox;
        i++;
    }
    printf("\nTamanho da fila: %d", i );
    
}
int main(){
    FILA f;
    REGISTRO reg;
    reg.chave = 10;
    
    inicializar(&f);
    
    exibirFila(&f);
    
    
    adicionarElemento(&f, reg);
    exibirFila(&f);
    
    
    reg.chave = 5;
    
    adicionarElemento(&f, reg);
    exibirFila(&f);


    excluirElemento(&f);
    exibirFila(&f);
    
    reInicializar(&f);
    exibirFila(&f);

    
    return 0;
}