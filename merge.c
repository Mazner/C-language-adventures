#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int* aloca_vetor(int size){

    int* vetor = malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++){
        scanf("%d",&vetor[i]);
    }

    return vetor;
}

int* clona_vetor(int* vetor, int size){
    
    int* novo_vetor = aloca_vetor(size);
    
    for(int i = 0; i < size; i++){
        novo_vetor[i] = vetor[i];
    }
return novo_vetor;
}

void imprime_vetor(int* vetor, int size){
    for(int i = 0; i < size; i++){
        printf("%d - ",vetor[i]);
    }
    printf("\n");
}   

void merge(int* v, int p, int q, int r){

    int n1 = q-p+1;
    int n2 = r-q;

    int* e = aloca_vetor((n1+2));
    int* d = aloca_vetor((n2+1));
    imprime_vetor(e,n1+1);
    imprime_vetor(d,n2+1);
}


int main(){

    int* vetor = aloca_vetor(3);
    imprime_vetor(vetor,3);
    merge(vetor,0,3,5);

    return 0;
}