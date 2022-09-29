#include <stdio.h>
#include <stdlib.h>
//#define DEBUG 1
#include "ordenacao.h"

void ImprimirVetor(int* v, int n){
    for(int i = 0; i < n; i++){
        printf("%d, ", v[i]);
    }
    printf("\n");
}

int* VetorAleatorio(int n, int seed, int max){
    srand(seed);
    int* v = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        v[i] = (rand() % max) + 1;
    }
    return v;
}

int main(int argc, char** argv){
    int n = atoi(argv[1]);
    int *v = VetorAleatorio(n, 99, n * 100);

    #ifdef DEBUG
    ImprimirVetor(v, n);
    #endif
    
    //SelectionSort(v, n);
    //BubbleSort(v, n);
    QuickSort(v, 0, n-1);
    //MergeSort(v, 0, n-1);
    
    #ifdef DEBUG
    ImprimirVetor(v, n);
    #endif

    free(v);

    return 0;
}

// int main(int argc, char** argv){
//     //int v[] = {3, 0, 2, 6, 5};

//     // int casos;
//     // scanf("%d", &casos);

//     // for(int j = 0; j < casos; j++){
//         int n;
//         scanf("%d", &n);
//         //printf("n = %d\n", n);

//         int* v = malloc(sizeof(int) * n);

//         for(int i = 0; i < n; i++){
//             scanf("%d", &v[i]);
//         }
//         ImprimirVetor(v, n);
//         //SelectionSort(v, n);
//         BubbleSort(v, n);
//         ImprimirVetor(v, n);
//         free(v);
//     //}
//     return 0;
// }