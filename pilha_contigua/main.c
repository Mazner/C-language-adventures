#include<stdio.h>
#include "pilha.h"

int main(){
    TipoElemento a;

    Pilha* p = pilha_criar();

    //pilha_empilhar(p, 4);
    //pilha_empilhar(p, 6);
    //pilha_empilhar(p, 8);
    TipoElemento v[3] = {4, 6, 8};

    pilha_empilharTodos(p,v,3);

    //pilha_topo(p,&a); //a = 8
    //pilha_desempilhar(p,&a);
    //pilha_imprimir(p); // 8 6 4

    //a = pilha_tamanho(p);

    Pilha* p2 = pilha_clone(p);

    pilha_imprimir(p2); // 8 6 4
    
    char vet[200];

    pilha_inverter(p2);

    pilha_imprimir(p2);

    pilha_toString(p2,vet);

    printf("%s",vet);

return 0;
}