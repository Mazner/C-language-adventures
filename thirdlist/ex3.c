//Make a program that asks the user for 10 integers, and shows the sum of them

#include<stdio.h>

int main(){
    int n=0;
    int sum = 0;

    for(int i=0; i<10; i++){
        printf("Tell me the number > ");
        scanf("%d",&n);
        sum += n;
        printf("\n");
    }
    printf("the result is > %d",sum);

return 0;
}