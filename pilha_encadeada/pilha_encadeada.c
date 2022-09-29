#include "pilha.h"

/**************************************
 * DADOS
 **************************************/
typedef struct no
{
    TipoElemento dado;
    struct no *prox;
} No;

struct pilha
{
    No *topo;
    int qtdeElementos;
};

/**************************************
 * IMPLEMENTAÇÃO
 **************************************/
// Desenvolva as funções
Pilha *pilha_criar()
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));

    if(!p){
        printf("Memória cheia!");
    }else{
        p->topo = NULL;
        p->qtdeElementos = -1;
        }
}
void pilha_destruir(Pilha **endereco)
{
    Pilha* p = *endereco;
    No* temp;
    while(p->topo != NULL){
        temp = p->topo;
        p->topo = p->topo->prox;
        free(temp);
    }
    *endereco = NULL;
    free(*endereco);
}
bool pilha_empilhar(Pilha *p, TipoElemento elemento)
{
    No* novoNo = (No*) malloc(sizeof(No));
    if(!novoNo) return false;

    novoNo->prox = p->topo;
    novoNo->dado = elemento;
    p->topo = novoNo;
    p->qtdeElementos++;
    return true;
}
bool pilha_desempilhar(Pilha *p, TipoElemento *saida)
{
    if(pilha_vazia(p)) return false;

    *saida = p->topo->dado;
    p->topo = p->topo->prox;
    p->qtdeElementos--;
}
bool pilha_topo(Pilha *p, TipoElemento *saida)
{
    if(pilha_vazia(p)) return false;

    *saida = p->topo->dado;
    return true;
}
bool pilha_vazia(Pilha *p)
{
    if (p->topo == NULL || p->qtdeElementos == -1)
    {
        printf("PILHA VAZIA!!");
        return true;
    }
    else
    {
        return false;
    }
}
void pilha_imprimir(Pilha *p)
{
    No *temp = p->topo;
    while (temp)
    {
        printf("%d", temp->dado);
        temp = temp->prox;
    }
}
int pilha_tamanho(Pilha *p)
{
    return p->qtdeElementos;
}
Pilha *pilha_clone(Pilha *p)
{
    int i = p->qtdeElementos;
    Pilha* pNovo = pilha_criar();

    while(i >= 0){
        pilha_empilhar(pNovo,p->topo->dado);
        p->topo = p->topo->prox;
        i--;
    }

}
void pilha_inverter(Pilha *p)
{
    No* temp;
    No* anterior;
    if (p->topo->prox->prox == NULL)
    {
        p->topo->prox->prox = p->topo;
        p->topo = (p->topo)->prox;
        (p->topo)->prox->prox = NULL;
    }
    else
    {
        anterior = p->topo;
        temp = (p->topo)->prox;
        p->topo = (p->topo)->prox->prox;
        anterior->prox = NULL;
        while ((p->topo)->prox != NULL)
        {
            temp->prox = anterior;
            anterior = temp;
            temp = p->topo;
            p->topo = (p->topo)->prox;
        }
        temp->prox = anterior;
        (p->topo)->prox = temp;
    }
}

bool pilha_empilharTodos(Pilha *p, TipoElemento *vetor, int tamVetor)
{
    for (int i = 0; i < tamVetor; i++)
    {
        pilha_empilhar(p, vetor[i]);
    }
    return true;
}
bool pilha_toString(Pilha *f, char *str){
    if(pilha_vazia(f)){
        return false;
    }else{
        int a=1;
        while(f->topo != NULL){
            a += sprintf(&str[a],"%d, ", f->topo->dado);
            f->topo = f->topo->prox;
        }
        str[0] = '[';
        str[a-2] = ']';
        str[a-1] = '\0';

        return true;
    }
}
void calculadora_posfixa(Pilha* p){
    
    int a,b,c;
    int res = 0;
    Pilha* resultado = pilha_criar();

    pilha_inverter(p);

    while(p->topo != NULL){
        if(p->topo->dado >= 48 && p->topo->dado <= 57){   //se for um numero
            pilhaEmpilharInt(resultado, p->topo->dado);
        }else if(p->topo->dado == '+'){
            pilhaDesempilharInt(resultado,&a);
            pilhaDesempilharInt(resultado,&b);

            pilhaEmpilharInt(resultado,a+b);
        }else if(p->topo->dado == '-'){
            pilhaDesempilharInt(resultado,&a);
            pilhaDesempilharInt(resultado,&b);
            
            pilhaEmpilharInt(resultado,a-b);
        }else if(p->topo->dado == '*'){
            pilhaDesempilharInt(resultado,&a);
            pilhaDesempilharInt(resultado,&b);
            
            pilhaEmpilharInt(resultado,a*b);
        }else if(p->topo->dado == '/'){
            pilhaDesempilharInt(resultado,&a);
            pilhaDesempilharInt(resultado,&b);
            if(b == 0){
                printf("Divisao por zero!!!\n");
            }else{
                pilhaEmpilharInt(resultado,a/b);
            }
        }
        p->topo = p->topo->prox;
    }
    //printf("Resultado final: %d\n",res);
    pilha_imprimir(resultado);
    }

bool pilhaDesempilharInt(Pilha *p, int *saida)
{
    if(pilha_vazia(p)) return false;

    *saida = p->topo->dado;
    p->topo = p->topo->prox;
    p->qtdeElementos--;
    return true;
}
bool pilhaEmpilharInt(Pilha *p, int elemento)
{
    No* novoNo = (No*) malloc(sizeof(No));
    if(!novoNo) return false;

    novoNo->prox = p->topo;
    novoNo->dado = elemento - '0';
    p->topo = novoNo;
    p->qtdeElementos++;
    return true;
}
