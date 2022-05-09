#include "pilha.h"

#define TAM_INICIAL 5

/**************************************
 * DADOS
 **************************************/
struct pilha
{
    TipoElemento *vetor;
    int tamVetor;
    int qtdeElementos;
};

/**************************************
 * IMPLEMENTAÇÃO
 **************************************/
// Desenvolva as funções
Pilha *pilha_criar()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    TipoElemento *vetor = (TipoElemento *)calloc(TAM_INICIAL, sizeof(TipoElemento));

    p->qtdeElementos = 0;
    p->tamVetor = TAM_INICIAL;
    p->vetor = vetor;
};

void pilha_destruir(Pilha **endereco)
{
    Pilha *p = *endereco;
    free(p);
    *endereco = NULL;
};

bool pilha_empilhar(Pilha *p, TipoElemento elemento)
{
    p->vetor[p->qtdeElementos] = elemento;
    if (p->vetor[p->qtdeElementos] == elemento)
    {
        p->qtdeElementos++;
        return true;
    }
    else
    {
        printf("Falha na insercao!!\n");
        return false;
    }
};
bool pilha_desempilhar(Pilha *p, TipoElemento *saida)
{
    if (pilha_vazia(p))
    {
        return false;
    }
    else
    {
        *saida = p->vetor[p->qtdeElementos - 1];
        if (*saida == p->vetor[p->qtdeElementos - 1])
        {
            p->qtdeElementos--;
            return true;
        }
        else
        {
            printf("FALHA NO DESEMPILHAMENTO");
        }
    }
}
bool pilha_topo(Pilha *p, TipoElemento *saida)
{
    if (pilha_vazia(p))
    {
        return false;
    }
    else
    {
        *saida = p->vetor[p->qtdeElementos - 1];
        if (*saida == p->vetor[p->qtdeElementos - 1])
        {
            return true;
        }
        else
        {
            return false;
        }
        return true;
    }
}
bool pilha_vazia(Pilha *p)
{
    if (p->qtdeElementos == 0)
    {
        printf("PILHA VAZIA!!\n\n\n");
        return true;
    }
    else
    {
        return false;
    }
}
bool pilha_imprimir(Pilha *p)
{
    if (pilha_vazia(p))
    {
        return false;
    }
    else
    {
        for (int i = p->qtdeElementos - 1; i >= 0; i--)
        {
            printf("%d\n", p->vetor[i]);
        }
        return true;
    }
}
int pilha_tamanho(Pilha *p)
{
    if (pilha_vazia(p))
    {
        return 0;
    }
    else
        return p->qtdeElementos;
}
Pilha *pilha_clone(Pilha *p)
{
    Pilha *p_clone = (Pilha *)malloc(sizeof(Pilha));
    TipoElemento *v_clone = (TipoElemento *)calloc(p->tamVetor, sizeof(TipoElemento));

    p_clone->vetor = v_clone;
    p_clone->tamVetor = p->tamVetor;

    p_clone->qtdeElementos = 0;
    for (int i = 0; i < p->qtdeElementos; i++)
    {
        p_clone->vetor[i] = p->vetor[i];
        p_clone->qtdeElementos++;
    }
    pilha_destruir(&p);
    return p_clone;
}
void pilha_inverter(Pilha *p)
{
    Pilha *p2 = pilha_criar();

    for (int i = 0; i < p->qtdeElementos; i++)
    {
        p2->vetor[i] = p->vetor[i];
    }

    int count = p->qtdeElementos - 1;
    for (int i = 0; i < p->qtdeElementos; i++)
    {
        p->vetor[i] = p2->vetor[count];
        count--;
    }
    pilha_destruir(&p2);
}
bool pilha_empilharTodos(Pilha *p, TipoElemento *vetor, int tamVetor)
{
    for (int i = 0; i < tamVetor; i++)
    {
        p->vetor[p->qtdeElementos] = vetor[i];
        if (p->vetor[p->qtdeElementos] == vetor[i])
        { // perguntar ao professor se essa verificação é útil e efetiva
            p->qtdeElementos++;
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
bool pilha_toString(Pilha *f, char *str){
    if(pilha_vazia(f)){
        pilha_imprimir(f);
        return false;
    }else{
        int a=1;
        for(int i = 0; i < f->qtdeElementos; i++){
            a += sprintf(&str[a],"%d, ", f->vetor[i]);
        }
        str[0] = '[';
        str[a-2] = ']';
        str[a-1] = '\0';

        return true;
    }
}
