#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "matriz_esparsa.h"

void inicializaMatrizEsparsa(MATRIZ_Esparsa *m, int num_lin, int num_col){
    int i;
    m->num_colunas = num_col;
    m->num_linhas = num_lin;
    m->A_coluna = (PONT*) malloc(num_col*(sizeof(PONT)));
    m->A_linha =  (PONT*) malloc(num_lin*(sizeof(PONT)));

    for(i=0; i<num_col; i++) m->A_coluna[i]=NULL;
    for(i=0; i<num_lin; i++) m->A_linha[i]=NULL;
}

void reinicializaMatrizEsparsa(MATRIZ_Esparsa *m){
    int i;
    for(i=0; i<m->num_linhas; i++){
        PONT atual = m->A_linha[i];
        while(atual!=NULL){
            PONT apagar=atual;
            atual= atual->prox_linha;
            free(apagar);
        }
    }
    free(m->A_linha); m->A_linha=NULL;
    free(m->A_coluna); m->A_coluna=NULL;
}


void exibirMatrizEsparsa(MATRIZ_Esparsa *m){
    int i;
    PONT aux;
    for(i=0; i<m->num_linhas; i++){
        aux=m->A_linha[i];
        while(aux!=NULL){
            printf("\n[lin=%d][col=%d] = %d", aux->linha, aux->coluna, aux->valor);
            aux=aux->prox_linha;
        }
    }
}



int atribuiValorMatriz(MATRIZ_Esparsa *m, int valor, int linha, int coluna){
   if(linha<0 || linha >= m->num_linhas || coluna < 0 || coluna>=m->num_colunas) return -1;
   PONT ant=NULL;
   PONT atual=m->A_linha[linha];
   while(atual!=NULL && atual->coluna<coluna){
      ant=atual;
      atual=atual->prox_linha;
   }
   //se o elemento já existe
   if(atual!=NULL && atual->coluna==coluna){ //se o elemento já está alocado memoria
     if(valor!=0){ //atualizacao do valor
       atual->valor=valor;
       return 0;
     }
     else{  //desalocar, pois o novo elemento é zero
        if(ant==NULL) m->A_linha[linha]=atual->prox_linha;
        else ant->prox_linha=atual->prox_linha;
        //atualizacao_coluna
        ant=NULL;
        atual=m->A_coluna[coluna];
        while(atual!=NULL && atual->linha!=linha){
            ant=atual;
            atual=atual->prox_coluna;
        }
        if(ant==NULL) m->A_coluna[coluna]=atual->prox_coluna;
        else ant->prox_coluna=atual->prox_coluna;
        free(atual);
        return 0;
     }
   } //fim-elemento já existe
   else{
      if(valor == 0) return  0;
      PONT novo = (PONT) malloc(sizeof(ELEMENTO));
      novo->valor=valor;
      novo->coluna=coluna;
      novo->linha=linha;
      novo->prox_coluna=novo->prox_linha=NULL;
      //atualizei a linha
      novo->prox_linha=atual;
      if(ant==NULL) m->A_linha[linha]=novo;
      else ant->prox_linha=novo;
      //atualizar coluna
      ant=NULL;
      atual=m->A_coluna[coluna];
      while(atual!=NULL && atual->linha<linha){
            ant=atual;
            atual=atual->prox_coluna;
      }
      if(ant==NULL) m->A_coluna[coluna]=novo;
      else ant->prox_coluna=novo;
      return 0;
   }

}





