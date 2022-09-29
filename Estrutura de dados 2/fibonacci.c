#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Função que calcula fibonaci sem ter o problema 
//de muitas execuções (utilizando a programação dinâmica)

uint64_t fib_m(int n, uint64_t* M){

    if(M[n] != 0)
        return M[n];
    uint64_t r = fib_m(n-1, M) + fib_m(n-2,M);
    M[n] = r;
    return r;
}

//Função que aloca o vetor e também o libera
uint64_t wrapper(int n){
    uint64_t* M = calloc(n+1, sizeof(uint64_t));
    M[0] = 1;
    M[1] = 1;
    uint64_t r = fib_m(n,M);
    free(M);
    return r; 
};

int main(int argc, char** argv){
    int n = atoi(argv[1]);
    printf("Fib(%d) = %lu\n",n,wrapper(n));

return 0;
}