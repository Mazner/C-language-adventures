<<<<<<< HEAD
#include <stdio.h>
#include "pilha.h"

int main()
{
  /*
  int a = 0;
  Pilha *p = pilha_criar();
  pilha_empilhar(p, 10);
  pilha_empilhar(p, 20);
  pilha_empilhar(p, 30);
  pilha_empilhar(p, 40);
  pilha_empilhar(p, 50);
  pilha_empilhar(p, 60);

  // pilha_destruir(&p);

  pilha_imprimir(p); //60,50,40,30,20,10
  pilha_topo(p,&a); //60
  printf("Valor do topo antes de desempilhar: %d\n",a);

  printf("Tamanho da pilha: %d\n",pilha_tamanho(p));

  pilha_desempilhar(p,&a); 
  
  pilha_topo(p,&a); //40
  printf("Valor do topo apos desempilhar: %d\n",a);

  //pilha_inverter(p);
  
  pilha_imprimir(p); //50, 40,30,20,10

 // Pilha* p3 = pilha_clone(p);
 // printf("P3\n");
  //pilha_imprimir(p3);
/*
  pilha_destruir(&p);

  Pilha* p2 = pilha_criar();

  int vet[4] = {15,25,35,45};
  int tam = 4;

  pilha_empilharTodos(p2, vet, 4);
  printf("%d\n",pilha_tamanho(p2));
  pilha_imprimir(p2); //45,35,25,15

  char vet2[200];
  pilha_inverter(p2);
  pilha_toString(p2,vet2);

  printf("%s",vet2);
*/
  Pilha* p3 = pilha_criar();
  char str[200] = "43*";

  pilha_empilharTodos(p3,str,strlen(str));
  
  calculadora_posfixa(p3);

  return 0;
=======
#include <stdio.h>
#include "pilha.h"

int main()
{
  /*
  int a = 0;
  Pilha *p = pilha_criar();
  pilha_empilhar(p, 10);
  pilha_empilhar(p, 20);
  pilha_empilhar(p, 30);
  pilha_empilhar(p, 40);
  pilha_empilhar(p, 50);
  pilha_empilhar(p, 60);

  // pilha_destruir(&p);

  pilha_imprimir(p); //60,50,40,30,20,10
  pilha_topo(p,&a); //60
  printf("Valor do topo antes de desempilhar: %d\n",a);

  printf("Tamanho da pilha: %d\n",pilha_tamanho(p));

  pilha_desempilhar(p,&a); 
  
  pilha_topo(p,&a); //40
  printf("Valor do topo apos desempilhar: %d\n",a);

  //pilha_inverter(p);
  
  pilha_imprimir(p); //50, 40,30,20,10

 // Pilha* p3 = pilha_clone(p);
 // printf("P3\n");
  //pilha_imprimir(p3);
/*
  pilha_destruir(&p);

  Pilha* p2 = pilha_criar();

  int vet[4] = {15,25,35,45};
  int tam = 4;

  pilha_empilharTodos(p2, vet, 4);
  printf("%d\n",pilha_tamanho(p2));
  pilha_imprimir(p2); //45,35,25,15

  char vet2[200];
  pilha_inverter(p2);
  pilha_toString(p2,vet2);

  printf("%s",vet2);
*/
  Pilha* p3 = pilha_criar();
  char str[200] = "43+";

  calculadora_posfixa(str);

  return 0;
>>>>>>> bc1cb435ad622ba72b425d227889d0315edea076
}