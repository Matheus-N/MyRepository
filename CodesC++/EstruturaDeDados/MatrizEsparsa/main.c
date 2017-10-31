#include "matriz_esparsa.h"

int main()
{
    MATRIZ_Esparsa M;

    inicializaMatrizEsparsa(&M, 10, 12);

    if(atribuiValorMatriz(&M, 10, 5, 10)==-1) printf("\nErro na insercao");

    if(atribuiValorMatriz(&M, 20, 8, 10)==-1) printf("\nErro na insercao");

    if(atribuiValorMatriz(&M, 7, 5, 11)==-1) printf("\nErro na insercao");

    exibirMatrizEsparsa(&M);

    if(atribuiValorMatriz(&M, 0, 5, 10)==-1) printf("\nErro na insercao");

    if(atribuiValorMatriz(&M, 0, 0, 0)==-1) printf("\nErro na insercao");

    printf("\n\n----------------------\n");

    exibirMatrizEsparsa(&M);

    reinicializaMatrizEsparsa(&M);

    return 0;
}
