#include "pilha.h"

/**************************************
* DADOS
**************************************/
typedef struct no{
	TipoElemento dado;
	struct no    *prox;
}No;

struct pilha{
	No *topo;
	int qtdeElementos;
};

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções
Pilha* pilha_criar(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha*));
    if(!p){
        printf("Sem memória para criar\n");
    }else{
        p->topo = NULL;
        p->qtdeElementos = 0;
    }
    return p;
}
void pilha_destruir(Pilha** endereco){ //Checar com o professor
    Pilha* p = *endereco;
    No* temp;
    while(p->topo!=NULL){
        temp = p->topo;
        p->topo = temp->prox;
        free(temp);
    }
    free(p);
    *endereco=NULL;
}
bool pilha_empilhar(Pilha* p, TipoElemento elemento){
    No* novoNo = (No*) malloc(sizeof(No*));
    if(novoNo == NULL)
    {
        printf("Memória cheia!");
        return false;
    }
    else
    {                         //                          
    novoNo->dado = elemento; //Colocando o novo elemento  | 10  | prox |
    novoNo->prox = p->topo; // Pegamos o elemento anterior, e colocamos-o no proximo, exemplo:                           
    p->topo = novoNo;      //                          
    p->qtdeElementos++;

    return true;
    }
}
bool pilha_desempilhar(Pilha* p, TipoElemento* saida){
    if(pilha_vazia(p)){
        return false;
    }else{
        
    }
} 
bool pilha_topo(Pilha* p, TipoElemento* saida){
    if(!pilha_vazia){
        //*saida = p->topo;
        return true;
    }else{
        printf("A pilha está vazia");
        return false;
    }
}
bool pilha_vazia(Pilha* p){
    if(p->topo == NULL){
        return true;
    }else{
        return false;
    }
}
void pilha_imprimir(Pilha* p){
    No* temp;
    while(temp){
        printf("%d\n", temp->dado);
        temp = temp->prox;
    }
}
int pilha_tamanho(Pilha* p){
    return p->qtdeElementos;
}
Pilha* pilha_clone(Pilha* p);
void pilha_inverter(Pilha* p);
bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);
bool pilha_toString(Pilha* f, char* str);