//Make a program that receives 10 integers, and print their average

#include<stdio.h>

int main(){
    int n=0;
    float n2;
    int mcalc=0;

    for(int i=0; i<4; i++){
        printf("tell me the number!");
        scanf("%d",&n);
        n2 += n;
        mcalc ++;
    }
    printf("the average is %.2f",n2/mcalc);

return 0;
}