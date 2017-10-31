#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct tabela{
    char chave[30];
    int idade;
    int situacao;
};

tabela *CriaTabela(int tamanho){
    int i;
    tabela *temp;
    temp = (tabela*)malloc(tamanho * sizeof(tabela));
    
    for(i = 0; i < tamanho; i++){
        temp[i].situacao = 0;
    }
    
    return temp;
}

int funcaoHash(char* chave, int tamanho){
    int i, hash;
    int total = 0;
    
    for(i = 0; i < strlen(chave); i++){
        total += (int)chave[i];
    }
    
    hash = (total % tamanho);
    
    return hash;
}

void insere(tabela *T, char *chave, int idade, int tamanho){
    int hash = funcaoHash(chave, tamanho);
    if(T[hash].situacao == 0){
        strcpy(T[hash].chave, chave);
        T[hash].idade = idade;
        T[hash].situacao = 1;
        
        
        cout << T[hash].chave << " " << hash << endl;
        
    }
     else{
         cout << "Hash Ocupado" << endl;
         
         int hashOriginal = hash;
         while(true){
             hash++;
             
             if(hash == tamanho){
                 hash = 0;
             }
             
             if(hash == hashOriginal){
                 break;
             }
             
             if(T[hash].situacao == 0){
                strcpy(T[hash].chave, chave);
                T[hash].idade = idade;
                T[hash].situacao = 1;
                cout << T[hash].chave << " " << hash << endl;
                break;
             }
            
         }
     }
    
    
}

void busca(tabela *T, char *chave, int tamanho){
    int hash = funcaoHash(chave, tamanho);
        int hashOriginal = hash;
        
        if(!strcmp(T[hash].chave, chave)){
                cout << "Posicao " << hash << endl;
                return;
        }
    
        while(true){
            hash++;
            
            if(hash > tamanho){
                hash = 0;
            }
            
            if(hash == hashOriginal){
                cout << "Nao encontrado" << endl;
                break;
            }
            
            if(!strcmp(T[hash].chave, chave)){
                cout << "Posicao " << hash << endl;
                break;
            }
            
        }
}

int main(){
    int tamanho = 11;
    tabela *T;
    T = CriaTabela(tamanho);
    char nome[30] = "AB";
    insere(T, nome, 30, tamanho);
    strcpy(nome, "CD");
    insere(T, nome, 30, tamanho);
    strcpy(nome, "CD");
    insere(T, nome, 30, tamanho);
    strcpy(nome, "AB");
    busca(T, nome, tamanho);
    strcpy(nome, "A");
    busca(T, nome, tamanho);
}