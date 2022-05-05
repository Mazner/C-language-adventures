#include <stdio.h>
#include "pilha.h"

int main(){
/*desenvolva testes*/

Pilha* p = pilha_criar();

pilha_empilhar(p, 6);
pilha_empilhar(p, 8);
pilha_empilhar(p, 10);
pilha_imprimir(p); // 10,8,6

TipoElemento* a;

pilha_desempilhar(p,a);
//pilha_imprimir(p); // 8,6
p = pilha_clone(p);
printf("\n\n\n");
pilha_inverter(p); // 6, 8,10









return 0;
}