#include<stdio.h>
#include "pilha.h"

int main(){
    Pilha* p =pilha_criar();
    pilha_empilhar(p, 10);
    pilha_empilhar(p, 20);
    pilha_empilhar(p, 30);
    pilha_empilhar(p, 40);
    pilha_empilhar(p, 50);


   pilha_destruir(&p);
  /*  
    pilha_imprimir(p);

    int a = 0;
    
    pilha_topo()
*/
return 0;
}