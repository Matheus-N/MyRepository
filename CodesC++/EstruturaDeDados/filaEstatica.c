#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int inicio;
    int nroElem;
}FILA;

void inicializar(FILA *f){
    f->inicio = 0;
    f->nroElem = 0;
}

int exibirNroElem(FILA *f){
    return (f->nroElem);
}

int exibirElem(FILA *f){
    if(f->nroElem == 0){
        return -1;
    }
    
    int i = f->inicio;
    int cont = f->nroElem;
    
    
    while(cont != 0){
        printf(" %d,", f->A[i].chave);
        cont--;
        i++;
        if(i == MAX){
            i = 0;
        }
    }
    
    return 0;
}

int adicionarElem(FILA *f, REGISTRO reg){
    if(f->nroElem == MAX){
        return -1;
    }
    
    int pos = (f->nroElem + f-> inicio) % MAX;
    
    f->A[pos] = reg;
    
    f->nroElem++;
    
    return 0;
}


int excluirElem(FILA *f){
    if(f->nroElem == 0){
        return -1;
    }
    
    f->nroElem--;
    
    f->inicio++;
    
    if(f->inicio == MAX){
        f->inicio = 0;
    } 
    
    return 0;
    
}

void reinicializar(FILA *f){
    f->nroElem = 0;
    f->inicio = 0;
}

int main(){
    FILA f;
    
    int cod = 0;
    
    while(1){
        printf("\n");
        printf("****Escolha sua operacao**** \n [1]Inicializar Fila \n [2]Exibit numero de elementos na Fila \n [3]Exibir elementos da Fila \n [4]Adicionar Elemento na Fila \n [5]Excluir elemento da Fila \n [6]SAIR \n" );
        
        scanf("%d", &cod);
        printf("\n");
        
        if(cod > 6 || cod < 1 ){
            printf("Entrada invalida \n");
        }
        
        else if(cod == 1){
            inicializar(&f);
            printf("FILA INICIALIZADA COM SUCESSO \n");
        }

        else if(cod == 2){
            int nroElem = exibirNroElem(&f);
            printf("NUMERO DE ELEMENTOS NA FILA = %d \n", nroElem);
        }        
        
        else if(cod == 3){
            int aux;
            aux = exibirElem(&f);
            printf("\n");
            if(aux == -1){
                printf("Fila Vazia \n");
            }
        }
        
        else if(cod == 4){
            printf("Informe o numero a ser adicionado \n");
            int num;
            scanf("%d", &num);
            
            REGISTRO reg;
            reg.chave = num;
            
            int aux;
            aux = adicionarElem(&f, reg);
            if(aux == -1){
                printf("Fila Cheia \n");
            }
            else if(aux == 0){
                printf("Elemento adicionado com sucesso \n");
            }
        }
        
        else if(cod == 5){
            int aux;
            aux = excluirElem(&f);
            if(aux == -1){
                printf("Fila Vazia \n");
            }
            else if(aux = 0){
                printf("Elemento excluido com sucesso \n");
            }
        }
    }
    
    return 0;
}