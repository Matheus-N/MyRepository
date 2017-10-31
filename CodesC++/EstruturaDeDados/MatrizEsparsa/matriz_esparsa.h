#ifndef MATRIZ_ESPARSA_H_INCLUDED
#define MATRIZ_ESPARSA_H_INCLUDED

typedef struct aux{
    int coluna;
    int linha;
    int valor;
    struct aux* prox_linha;
    struct aux* prox_coluna;
}ELEMENTO, * PONT;

typedef struct{
    int num_linhas;
    int num_colunas;
    PONT* A_linha;
    PONT* A_coluna;
}MATRIZ_Esparsa;

void inicializaMatrizEsparsa(MATRIZ_Esparsa *, int , int);
void reinicializaMatrizEsparsa(MATRIZ_Esparsa *m);

#endif // MATRIZ_ESPARSA_H_INCLUDED
