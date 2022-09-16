#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void merge(int* v, int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int* e = malloc(sizeof(int) * (n1+1));
    int* d = malloc(sizeof(int) * (n2+1));
    int i, j , k;
    for(i = 0; i < n1; i++)
        e[i] = v[p+i];
    e[n1] = INT_MAX;
    for(j = 0; j < n2; j++)
        d[j] = v[q+1+j];
    d[n2] = INT_MAX;
    i = 0;
    j = 0;
    for(k = p; k <= r; k++){
        if(e[i]<=d[j]){
            v[k] = e[i];
            i++;
        }
        else{
            v[k] = d[j];
            j++;
        }
    }
    free(e);
    free(d);
}

void MergeSort(int* v, int e, int d){
    if(e < d){
        int m = (e + d)/2;
        MergeSort(v, e, m);
        MergeSort(v, m+1, d);
        merge(v, e, m, d);
    }
}


int pmax(int* v, int ini, int fim){
    int maior = ini;
    for(int i = ini+1; i <= fim; i++){
        if(v[i] > v[maior]){
            maior = i;
        }
    }
    return maior;
}

void trocar(int* v, int a, int b){
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

void SelectionSort(int *v, int n){
    for(int i = n-1; i > 0; i--){
        int maior = pmax(v, 0, i);
        trocar(v, maior, i);
    }
}

void BubbleSort(int *v, int n){
    for(int j = n-1; j >=1; j--){
        for(int i = 0; i < j; i++){
            if(v[i] > v[i+1]){
                trocar(v, i, i+1);
            }
        }
    }
}

int partition(int *v, int p, int r){
    int x = v[r];
    int i = p-1;
    for(int j = p; j < r; j++){
        if(v[j] <= x){
            trocar(v, i+1, j);
            i++;
        }
    }
    trocar(v, i+1, r);
    return i+1;
}

void QuickSort(int *v, int p, int r){
    if(p < r){
        int q = partition(v, p, r);
        QuickSort(v, p, q-1);
        QuickSort(v, q+1, r);
    }

}

