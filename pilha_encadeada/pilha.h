<<<<<<< HEAD
#ifndef _PILHA_H_
#define _PILHA_H_

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef char TipoElemento;
/**************************************
* DADOS
**************************************/
typedef struct pilha Pilha;

/**************************************
* PROTÓTIPOS
**************************************/
Pilha* pilha_criar();
void pilha_destruir(Pilha** endereco);
bool pilha_empilhar(Pilha* p, TipoElemento elemento);
bool pilha_desempilhar(Pilha* p, TipoElemento* saida); 
bool pilha_topo(Pilha* p, TipoElemento* saida); 
bool pilha_vazia(Pilha* p);
void pilha_imprimir(Pilha* p);
int pilha_tamanho(Pilha* p);
Pilha* pilha_clone(Pilha* p);
void pilha_inverter(Pilha* p);
bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);
bool pilha_toString(Pilha* p, char* str);
void calculadora_posfixa(Pilha* p);
int convertToInt(char dado);
bool pilhaDesempilharInt(Pilha *p, int *saida);
bool pilhaEmpilharInt(Pilha *p, int elemento);


=======
#ifndef _PILHA_H_
#define _PILHA_H_

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef int TipoElemento;
/**************************************
* DADOS
**************************************/
typedef struct pilha Pilha;
typedef struct pilhaInt PilhaInt;

/**************************************
* PROTÓTIPOS
**************************************/
Pilha* pilha_criar();
void pilha_destruir(Pilha** endereco);
bool pilha_empilhar(Pilha* p, TipoElemento elemento);
bool pilha_desempilhar(Pilha* p, TipoElemento* saida); 
bool pilha_topo(Pilha* p, TipoElemento* saida); 
bool pilha_vazia(Pilha* p);
void pilha_imprimir(Pilha* p);
int pilha_tamanho(Pilha* p);
Pilha* pilha_clone(Pilha* p);
void pilha_inverter(Pilha* p);
bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);
bool pilha_toString(Pilha* p, char* str);
void calculadora_posfixa(char* str);
int convertToInt(char dado);
bool pilhaDesempilharInt(Pilha *p, int *saida);
bool pilhaEmpilharInt(Pilha *p, char elemento);


>>>>>>> bc1cb435ad622ba72b425d227889d0315edea076
#endif