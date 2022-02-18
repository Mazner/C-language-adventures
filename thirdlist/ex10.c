//make a program that calculates a harmonic number until N
//harmonic number: 1+ 1/2 + 1/3 + 1/4 + ... 1/n

#include<stdio.h>

int main(){
    int n;
    double sum=1;

    printf("Tell me the number, and i'll show you the harmonic sum of it! > ");
    scanf("%d",&n);
    printf("1+ ");
    for(double i=2; i<n+1; i++){
        printf("1/%.1lf+ ",i);
        sum += (1/i);
    }
    printf("\n");
    printf("the sum is: %lf",sum);
return 0;
}