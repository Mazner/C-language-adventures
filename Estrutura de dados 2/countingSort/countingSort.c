#include <stdio.h>
#include <strign.h>
#include <stdlib.h>


void countingSort(info *v, int n){  // V é o vetor e n o tamanho.
    int k;
    
    k = max(v,n);
    c = calloc(n , sizeof(int));
    s = malloc (n * sizeof(info*));
    for(j = 0; j < n; j++){         // Contando a frequência das chaves.
        c[v[j].chave]++;
    }
    int t = 0;
    int acum = 0;
    for(int i = 0; i <= k; i++){    // Realizando a soma de prefixo
        t = c[i];                   // excludente para determinar a
        c[i] = acum                 // posição inicial de cada chave.
        acum += t;
    }
    for(int i = 0; i < n; i++){     // Copiando os elementos do ve-
        s[c[v[i].chave]] = v[i];    // tor V para a posição adequa-
        c[v[i].chave]++;            // da em S com base em C.
    }
    memcpy(v,s,sizeof(info) * n);
    free(c);
    free(s);
}