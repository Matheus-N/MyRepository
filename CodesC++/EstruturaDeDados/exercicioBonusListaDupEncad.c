//----------------------------------------início do cabeçalho
//IMPLEMENTAÇÃO DO TRABALHO SUPER BÔNUS  –  E.D.
//Nome :   Matheus dos Santos Nascimento       RA:120134
//-----------------------------------------final do cabeçalho

#include <stdio.h>
#include <stdlib.h>

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
}REGISTRO;

typedef struct aux {
    REGISTRO reg;
    struct aux* ant;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
    PONT inicio;
    PONT fim;
}LISTA;

void inicializarLista(LISTA *l){
   l->inicio=NULL;
   l->fim=NULL;
}

int tamanhodaLista(LISTA *l){
    int tamanho = 0;
    PONT p = l->fim;
    while(p != NULL){
        tamanho++;
        p = p->ant;
    }
    return tamanho;
}

void exibirLista(LISTA *l){
    PONT p = l->inicio;
    if(tamanhodaLista(l) != 0){
        printf("Lista:");
    }else{
        printf("Lista:|LISTA VAZIA|");
    }
    while(p != NULL){
        printf("|%d", p->reg.chave);
        p = p->prox;
    }
    printf("|");
}

PONT buscaSequencialExc(LISTA *l, TIPOCHAVE ch, PONT *ant){
    *ant = NULL;
    PONT atual = l->inicio;
    while (atual != NULL  &&   atual->reg.chave < ch) {
        *ant = atual;
        atual = atual->prox;
    }
    if(atual != NULL   &&   atual->reg.chave == ch) return atual;
    return NULL;
}


int inserirElemLista(LISTA *l, REGISTRO reg){
    TIPOCHAVE ch = reg.chave;
    PONT ant, novo;

    novo = (PONT) malloc(sizeof(ELEMENTO));
    
    if(l->inicio == NULL){
        l->inicio = novo;
        l->fim = novo;
        novo->reg = reg;
        novo->ant = NULL;
        novo->prox = NULL;
    }
    else{
        l->fim->prox = novo;
        l->fim = novo;
        novo->prox = NULL;
    }
    
    return 0;
}

void receberLista(LISTA *l){
    int cod = 0;
    REGISTRO reg;
    
    
    while(cod != 2){
        printf("[1] Adicionar elemento \n");
        printf("[2] Terminar a inserção \n");
        printf("Selecione a opção: ");
        scanf("%d", &cod);
        
        
        if(cod != 1 && cod != 2){
            printf("***Entrada Inválida***\n\n");
        }
        else if(cod == 1){
            int repete;
            int num;
            
            printf("Insira o numero: ");
            scanf("%d", &num);
            printf("\n");
            
            reg.chave = num;
            
            repete = inserirElemLista(l, reg);
            
            if(repete == -1){
                printf("**Numero Repetido**\n\n");
                
            }
            else if (repete == 0){
                printf("**Numero Inserido com sucesso**\n\n");
                
            }
            
            
        }
        
        
        
    }
    
    return;
    
}

void concatenar(LISTA *l1, LISTA *l2, LISTA *l3, LISTA *l4){ // JUNTA AS 3 LISTAS EM UMA SO
    l1->fim->prox = l2->inicio;
    l2->fim->prox = l3->inicio;
    l2->inicio->ant = l1->fim;
    l3->inicio->ant = l2->fim;
    
    l4->inicio = l1->inicio;
    l4->fim = l3->fim;
}

PONT menor(LISTA *l, PONT comeco){                 //ENCONTRA O MENOR ELEMENTO A PARTIR DE UM PONTO DEFINIDO NA LISTA
    PONT aux = comeco;
    int aux2 = aux->reg.chave;
    
    for(PONT i = comeco; i != l-> fim; i = i->prox){
        if(aux2 < i->reg.chave){
            aux = i;
        }
    }
    
    return aux;
}

void trocar(LISTA *l, PONT x, PONT y){
    PONT aux;
    
    PONT aux2;
    
    aux2 = x->ant;          //ANTERIOR E PROX DE X APONTAR PRA Y
    aux2->prox = y; 
    aux2 = x->prox;
    aux2->ant = y;
    
    aux2 = y->ant;          //ANTERIOR E PROX DE Y APONTAR PRA X
    aux2->prox = x; 
    aux2 = y->prox;
    aux2->ant = x;
    
    aux->ant = x->ant;      //X APONTAR PRA PROX E ANT DE Y E VICE VERSA
    aux->prox = x->prox;
    x->ant = y->ant;
    x->prox = y->prox;
    y->ant = aux->ant;
    y->prox = aux->prox;

}

void sort(LISTA *l){
    for(PONT i = l->inicio; i->prox != NULL; i = i->prox){
        PONT aux = menor(l, i);
        
        if(i->reg.chave > aux->reg.chave){
            trocar(l, i, aux);
        }
        
    }
}

int main (){
    LISTA l1, l2, l3, l4;
    
    inicializarLista(&l1);
    inicializarLista(&l2);
    inicializarLista(&l3);
    inicializarLista(&l4);
    
    printf("******* CONCATENAR 3 LISTAS DUPLAMENTE ENCADEADAS *******\n\n");

    printf("INSIRA A PRIMEIRA LISTA \n");
    receberLista(&l1);
    exibirLista(&l1);
    printf("INSIRA A SEGUNDA LISTA \n");
    receberLista(&l2);
    
    printf("INSIRA A TERCEIRA LISTA \n");
    receberLista(&l3);
        
    concatenar(&l1, &l2, &l3, &l4);
    
    sort(&l4);
    
    printf("**** QUARTA LISTA ****\n\n");
    
    
   
    exibirLista(&l4);
    
    return 0;    
        
}
 