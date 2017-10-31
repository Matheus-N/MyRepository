#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void limpaTela();

typedef struct aux{                     //LISTA USUARIOS > ELEMENTO USUARIO > LISTA ID COMUNIDADES > ELEMENTO ID COMUNIDADE
    struct aux* prox;
    int id;
}ID_COMUNIDADE;

typedef struct aux1{                    //LISTA COMUNIDADE > ELEMENTO COMUNIDADE > LISTA ID USUARIOS > ELEMENTO ID USUARIO
    struct aux1* prox;
    int id;
}ID_USUARIO;



typedef struct {                        //LISTA USUARIOS > ELEMENTO USUARIO > LISTA ID COMUNIDADES
    ID_COMUNIDADE* inicio_id_comunidade;
}LISTA_ID_COMUNIDADES;

typedef struct {                        //LISTA COMUNIDADE > ELEMENTO COMUNIDADE > LISTA ID USUARIOS
    ID_USUARIO* inicio_id_usuario;
}LISTA_ID_USUARIOS;         




typedef struct aux2 {                   //LISTA COMUNIDADE > ELEMENTO COMUNIDADE    
    char nome[50];
    char criador[50];
    LISTA_ID_USUARIOS lista;
    
    struct aux2* prox;
}COMUNIDADE;

typedef struct aux3 {                   //LISTA USUARIOS > ELEMENTO USUARIO
    char nome[50];
    LISTA_ID_COMUNIDADES lista;
    
    struct aux3* prox;
}USUARIO;

typedef COMUNIDADE* PONT_COMU;          //PONTEIRO COMUNIDADE
typedef USUARIO* PONT_USUARIO;          //PONTEIRO USUARIO
typedef ID_COMUNIDADE* PONT_ID_COMUNIDADE;
typedef ID_USUARIO* PONT_ID_USUARIO;



typedef struct {                        //LISTA COMUNIDADES
    PONT_COMU inicioComu;              
    PONT_COMU fimComu;
}LISTA_COMUNIDADES;

typedef struct {                        //LISTA USUARIOS
    PONT_USUARIO inicioUsuario;        
    PONT_USUARIO fimUsuario;
}LISTA_USUARIOS;


void iniciarListaUsuarios(LISTA_USUARIOS *l){
    l->inicioUsuario = NULL;
    l->fimUsuario = NULL;
}

incluirComunidade(char nomeComunidade[], char nomeUsuario, LISTA_COMUNIDADES *l){
    if(procurarExistente(nomeComunidade, LISTA_COMUNIDADES *l)){
        adicionarComunidade(nomeComunidade, nomeUsuario, *l)
        
    }
    else{
   // criarComunidade(nomeComunidade);    
    }
}

void adicionarIDUsuario(char nomeUsuario, COMUNIDADE c){
    PONT_ID_USUARIO novo;
    novo = (PONT_ID_USUARIO)malloc(sizeof(PONT_ID_USUARIO));

    if(c->inicio == NULL){
        
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

void adicionarComunidade(char nomeComunidade[], char nomeCriador[], LISTA_COMUNIDADES *l){
    
    PONT_COMU novaComunidade;
    novaComunidade = (PONT_COMU)malloc(sizeof(PONT_COMU));
    
    if(l->inicioComu == NULL){       
        l->inicioComu = novaComunidade;
        l->fimComu = novaComunidade;
        
    }
    else{
        l->fimComu->prox = novaComunidade;
        l->fimComu = novaComunidade;
        
    }
    
    l->fimComu->lista.inicio_id_usuario = NULL;
    
    strcpy(novaComunidade->nome, nomeComunidade);
    strcpy(novaComunidade->criador, nomeCriador);
    novaComunidade->prox = NULL;
    
    for(i = 0; i <=  9; ++i){
        if( strcmp(dictionary[i].word, dictionary[i+1].word ) > 0 )    {
            temp[i] = dictionary[i];
            dictionary[i] = dictionary[i+1];
            dictionary[i+1] = temp[i];
    }
}


  
}


void adicionarUsuario(LISTA_USUARIOS *l){
    
    char novoNome[50];
    int opc = 0;
    
    while(1){                           //PEGAR O NOME DO USUARIO
        printf("Informe o nome do usuario: ");
        scanf("%s" , novoNome);
        limpaTela();
        printf("Confirmar nome: %s\n", novoNome);
        printf("1 - Sim\n 2 - Não\n");
        scanf("%d", &opc);
        limpaTela();
        if(opc == 1){
            break;
        }
    }
    
    PONT_USUARIO novoUsuario;
    novoUsuario = (PONT_USUARIO)malloc(sizeof(PONT_USUARIO));
    
    if(l->inicioUsuario == NULL){       
        l->inicioUsuario = novoUsuario;
        l->fimUsuario = novoUsuario;
        
        strcpy(novoUsuario->nome, novoNome);
        novoUsuario->prox = NULL;
    }
    else{
        l->fimUsuario->prox = novoUsuario;
        l->fimUsuario = novoUsuario;
        
        strcpy(novoUsuario->nome, novoNome);
        novoUsuario->prox = NULL;
    }
    
  
}






void menu(){
    int opc = 0;
    
    while(1){
            
        printf("[1] - Opção 1\n");

            
        scanf("%d", &opc);
            
        if(opc == 1){
            //função1();
        }
            
        else{
            limpaTela();
            printf("Entrada Invalida\n");
        }
            
    }
    
}

/*void telaLogin(){
  int opc = 0;
    
    while(1){
            
        printf("[1] - Fazer Login\n");

            
        scanf("%d", &opc);
            
        if(opc == 1){
            login();
        }
            
        else{
            limpaTela();
            printf("Entrada Invalida\n");
        }
            
    }
}
*/

int main(){
    
    //telaLogin();
        
    menu();  
    
    return 0;
}


void limpaTela(){
    system("clear");    
}