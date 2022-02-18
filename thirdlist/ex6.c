//Make a program that reads 10 numbers, and show the biggest as well as the smallest

#include<stdio.h>

int main(){
    int n,flag;
    int big=0, small=0;

        printf("Tell me the number > ");
        scanf("%d",&n);
    big=n;
    small=n;    
    
    for(int i=0; i<9; i++){
     
     printf("Tell me the number > ");
     scanf("%d",&n);

    if(n>big){
            big = n;
    }else if (n<small){
            small = n;
        }
    }
    printf("biggest: %d\nsmallest: %d",big,small);
    
return 0;
}