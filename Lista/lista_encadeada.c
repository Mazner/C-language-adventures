#include "lista.h"
#include <string.h>


/***********************************************
* ESPECIFICAÇÃO DOS DADOS
************************************************/

typedef struct no{
	TipoElemento dado;
	struct no    *ant;
	struct no    *prox;
}No;

struct lista{
	No *inicio;
	No *fim;
	int qtde;
};


/***********************************************
* FUNÇÕES AUXILIARES
************************************************/
No* criarNo(TipoElemento elemento){
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = elemento;
    novo->ant = NULL;
    novo->prox = NULL;
    return novo;
}

No* procuraNo(Lista* l, int posicao){
    No* aux;
    if(posicao < (l->qtde/2)){  //Verificando se está mais próximo do início, ou do fim
        aux = l->inicio;
        for(int i = 0; i < posicao; i++){
            aux = aux->prox;
        }
    }else{
        aux = l->fim;
        for(int i = l->qtde-1; i > posicao; i--){
            aux = aux->ant;
        }
    }
}

void inserirEsquerda(No* referencia, No* novo){
    novo->prox = referencia;
    novo->ant = referencia->ant;
    referencia->ant->prox = novo;
    referencia->ant = novo;
}

void inserirDireita(No* referencia, No* novo){
    novo->ant = referencia;
    novo->prox = referencia->prox;
    referencia->prox->ant = novo;
    referencia->prox = novo;
}

/***********************************************
* IMPLEMENTAÇÃO
************************************************/

Lista* lista_criar(){
    Lista* novaLista = (Lista*) malloc(sizeof(Lista));

    novaLista->inicio = NULL;
    novaLista->fim = NULL;
    novaLista->qtde = 0;
}

void lista_destruir(Lista** endLista){
    Lista* lista = *endLista;
    No* aux = lista->inicio;
    while(aux != NULL){
        free(aux);
        aux = lista->inicio->prox;
    }
    *endLista = NULL;
    free(lista);
}
bool lista_anexar(Lista* l, TipoElemento elemento){

    No* novoNo = criarNo(elemento);

    if(lista_vazia(l)){
        l->inicio = novoNo;
    }else{
        novoNo->ant = l->fim;  //Fazendo com que o novo nó aponte para o ultimo elemento (já que estamo anexando)
        l->fim->prox = novoNo; //Dizendo ao nó anterior que o novo nó é seu próximo nó
    }
    l->fim = novoNo;
    l->qtde++;
}

bool lista_inserir(Lista* l, TipoElemento elemento, int posicao){
    if(lista_vazia(l))  lista_anexar(l,elemento);

    No* novo = criarNo(elemento);

    if(posicao == 0){
        novo->prox = l->inicio;
        novo->ant  = NULL;
        l->inicio->ant = novo;
        l->inicio = novo;    
    }else if(posicao == l->qtde){
        novo->prox = NULL;
        novo-> ant = l->fim;
        l->fim->prox = novo;
        l->fim = novo;
    }else{
        No* aux = procuraNo(l, posicao-1); // procurar a posicao correta (por que posicao - 1?)
        inserirDireita(aux, novo);
    }
    l->qtde++;
}


bool lista_removerPosicao(Lista* l, int posicao, TipoElemento* endereco);
int lista_removerElemento(Lista* l, TipoElemento elemento);
bool lista_substituir(Lista* l, int posicao, TipoElemento novoElemento);
bool lista_vazia(Lista* l){
    if(l->qtde == 0){
        return true;
    }else{
        return false;
    }
}
int lista_posicao(Lista* l, TipoElemento elemento);
bool lista_buscar(Lista* l, int posicao, TipoElemento* endereco);
bool lista_contem(Lista* l, TipoElemento elemento);
int lista_tamanho(Lista* l);

bool lista_toString(Lista* l, char* str){

    str[0] = '\0';
    strcat(str, "[");

    No* aux = l->inicio;
    while(aux != NULL){
        char elemento[100];
        sprintf(elemento, "%d", aux->dado); // convertendo o aux->dado em uma string
        strcat(str, elemento);

        if (aux->prox != NULL) strcat(str, ",");
        aux = aux->prox;
    }

    strcat(str, "]");
    return true;

}

void lista_imprimir(Lista* l);