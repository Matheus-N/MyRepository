#include <stdio.h>
#include <stdlib.h>

typedef struct no *pno;

typedef struct no{
    char data;
    pno esq;
    pno dir;
}no;

typedef pno tree;

tree raiz;

void define(tree t){
    t = NULL;
}

void criaRaiz(tree t, char input){
    pno no = malloc(sizeof(no));
    no->esq = NULL;
    no->dir = NULL;
    no->data = input;
    t = no;
}

int altura(tree r){
    if(r == NULL){
        return 0;
    }
    
    int altE = altura(r->esq);
    int altD = altura(r->dir);
    
    if(altE > altD){
        return(altE + 1);
    }
    else{
        return (altD + 1);
    }
}

int numerosnos(tree r){
    if(r == NULL){
        return 0;
    }
    
    int nE = numerosnos(r->esq);
    int nD = numerosnos(r->dir);
    
    return (nE + nD + 1);
}

pno buscaRecursiva(tree raiz, char dataSearch){
    if(raiz == NULL){
        return NULL;
    }
    
    if(dataSearch == raiz->data){
        return raiz;
    }
    
    if(dataSearch < raiz->data){
        return buscaRecursiva(raiz->esq, dataSearch);
    }
    else{
        return buscaRecursiva(raiz->dir, dataSearch);
    }
}

pno busca(tree raiz, char dataSearch){
    pno p;
    
    p = raiz;
    
    while(p != NULL){
        if(p->data == dataSearch){
            return p;
        }
        else{
            if(dataSearch > p->data){
                p = p->dir;
            }
            else{
                p = p->esq;
            }
        }
    }
    
    return p;
}

pno insereRecursivo(char x, tree raiz){
    if(raiz == NULL){
        raiz = malloc(sizeof(tree));
        
        raiz->data = x;
        raiz->esq = NULL;
        raiz->dir = NULL;
        return raiz;
    }
    
    if(x < raiz->data){
        return insereRecursivo(x, raiz->esq);
    }
    if(x > raiz->data){
        return insereRecursivo(x, raiz->dir);
    }
    
    return raiz;
}


void subsMenorDir(pno p, pno suc){
    pno aux;
    
    if(suc->esq == NULL){
        p->data = suc->data;
        
        aux = suc;
        suc = suc->dir;
        free(aux);
    }
    else{
        subsMenorDir(p, suc->esq);
    }
}

void removerNo(pno p){
    pno aux;
    
    if(p->esq == NULL){
        aux = p;
        p = p->dir;
        free(aux);
    }
    else if(p->dir == NULL){
        aux = p;
        p = p->esq;
        free(aux);
    }
    
    else{
        subsMenorDir(p, p->dir);
    }
    
}


int excluir(tree raiz, char x){
    if(raiz == NULL){
        return 2;      //false
    }
    
    if(raiz->data == x){
       removerNo(raiz);
       return 1;        //true
    }
    
    if(raiz->data < x){
        return excluir(raiz->dir, x);
    }
    else{
        return excluir(raiz->esq, x);
    }
    
}

int main(){
    while(1){
        printf("***** Escolha a função: ***** \n\n");
        printf("[1] Criar Raiz\n");
        printf("[2] Inserir Elemento\n");
        printf("[3] Buscar Elemento\n");
        printf("[4] Buscar Elemento Recursivamente\n");
        printf("[5] Calcular Altura\n");
        printf("[6] Calcular Numero de nos\n");
        printf("[7] Excluir Elemento\n\n");
        printf("[0] Sair\n");
             
        int dig;
        
        tree t;
                
        scanf("%d", &dig);
        
        if(dig == 0){
            return 0;
        }
        
        else if(dig == 1){
            
            char input;
            
            printf("Insira o primeiro elemento: \n");
            
            scanf(" %c", &input);
            
            criaRaiz(t, input);
            
            printf("\n\n ARVORE CRIADA \n\n");
        }
        
        else if(dig == 2){
            char input;
            
            pno aux;
            
            printf("Informe o elemento a ser inserido: \n");
            
            scanf(" %c", &input);
            
            aux = insereRecursivo(input, t);
            
            
            printf("\n\n ELEMENTO INSERIDO EM: %p \n\n", aux);
            
            
        }
        
        else if(dig == 3){
            printf("Informe o elemento para busca: \n");
            
            char input;
            pno aux;
            
            
            scanf(" %c", &input);
            
            aux = busca(t, input);
            
            printf("\n\n ELEMENTO ENCONTRADO EM: %p \n\n", aux);
        }
        
        else if(dig == 4){
            printf("Informe o elemento para busca: \n");
            
            char input;
            pno aux;
            
            
            scanf(" %c", &input);
            
            aux = buscaRecursiva(t, input);
            
            printf("\n\n ELEMENTO ENCONTRADO EM: %p \n\n", aux);
            
        }
        
        else if(dig == 5){
            int aux;
            
            aux = altura(t);
            
            printf("\n\n ALTURA DA ARVORE: %d \n\n", aux);
        }
        
        else if(dig == 6){
            int aux;
            
            aux = numerosnos(t);
            
            printf("\n\n NUMERO DE NOS DA ARVORE: %d \n\n", aux);
        }
        
        else if(dig == 7){
            char input;
            
            int aux;
            
            printf("Informe o elemento a ser excluido: \n");
            
            scanf(" %c", &input);
            
            aux = excluir(t, input);
            
            if(aux == 1){
                printf("\n\n ELEMENTO EXCLUIDO \n\n");
            }
            else if(aux == 2){
                printf("\n\n ELEMENTO NAO ENCONTRADO \n\n");  
            }
        }
    }
    
    
    
    
}