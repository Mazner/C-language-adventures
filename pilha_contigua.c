#include "pilha.h"

#define TAM_INCIAL 5

/*******************************************************************
*   DADOS   *
*******************************************************************/

struct pilha{
    TipoElemento* vetor;
    int tamVetor;
    int qtdeElementos;
};

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções

Pilha* pilha_criar(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    TipoElemento* v = (TipoElemento*) calloc(TAM_INCIAL,sizeof(TipoElemento));

    p->vetor = v;

    p->tamVetor = TAM_INCIAL;
    p->qtdeElementos = 0; 

return p;
};

void pilha_destruir(Pilha** endereco){
    Pilha* p = *endereco;
    free(p);
    *endereco = NULL;
};
bool pilha_empilhar(Pilha* p, TipoElemento elemento){

    p->vetor[p->qtdeElementos] = elemento;
    if(p->vetor[p->qtdeElementos] == elemento){
        p->qtdeElementos++;
        return true;
    }else{
        printf("Elemento não empilhado");
        return false;
    }
}
bool pilha_desempilhar(Pilha* p, TipoElemento* saida){
    *saida = p->vetor[p->qtdeElementos-1];
    if(*saida == p->vetor[p->qtdeElementos-1]){
        p->qtdeElementos--;
        return true;
    }else{
        printf("FALHA NO DESEMPILHAMENTO");
    }
    
}
bool pilha_topo(Pilha* p, TipoElemento* saida){
    *saida = p->vetor[p->qtdeElementos];
    if(*saida = p->vetor[p->qtdeElementos]){
        return true;
    }else{
    return false;
    }    
}
bool pilha_vazia(Pilha* p){
    if(p->qtdeElementos == 0){
        printf("vazia\n");
        return true;
    }else{
        printf("não vazia");
        return false;
    }
}
void pilha_imprimir(Pilha* p){
    for(int i = p->qtdeElementos-1; i >= 0; i--){
        printf("%d\n",p->vetor[i]);
    }
}
int pilha_tamanho(Pilha* p){
    return p->tamVetor;
}
Pilha* pilha_clone(Pilha* p){
    Pilha* p_clone = (Pilha*) malloc(sizeof(Pilha));
    TipoElemento* v_clone = (TipoElemento*) calloc(p->tamVetor,sizeof(TipoElemento));

    p_clone->vetor = v_clone;
    p_clone->tamVetor = p->tamVetor;
    p_clone->qtdeElementos = p->qtdeElementos;

    for(int i = p->qtdeElementos-1; i >= 0; i--){
        p_clone->vetor[i] = p->vetor[i];
    }
    pilha_destruir(&p);
    
return p_clone;
}
void pilha_inverter(Pilha* p){
    Pilha* p_clone = pilha_criar();

    for(int i = p->qtdeElementos - 1; i >= 0; i--){
        p_clone->vetor[p_clone->qtdeElementos] = p->vetor[i];
        p_clone->qtdeElementos++;
    }

}
bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor){
    
    for(int i = 0;  i < tamVetor; i++){
        p->vetor[i] = vetor[i];
    }

}
bool pilha_toString(Pilha* f, char* str);