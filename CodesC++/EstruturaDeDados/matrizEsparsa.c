#include <stdio.h>
#include <stdlib.h>

typedef struct aux{
    int chave;
    int lin;
    int col;
    struct aux* proxLin;
    struct aux* proxCol;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
    int numLin;
    int numCol;
    PONT* AlocLin;
    PONT* AlocCol;
}MATRIZ;

void inicializarMatriz(MATRIZ *m, int numLinInic, int numColInic){
    m->numLin - numLinInic;
    m->numCol - numColInic;
    
    m->AlocLin = (PONT*) malloc(numColInic*(sizeof(PONT)));
    m->AlocCol = (PONT*) malloc(numLinInic*(sizeof(PONT)));
    
    int i;
    
    for(i = 0; i < numColInic; i++){
        m->AlocCol[i] = NULL;
    }

    for(i = 0; i < numLinInic; i++){
        m->AlocLin[i] = NULL;
    }    
    
    
    
}