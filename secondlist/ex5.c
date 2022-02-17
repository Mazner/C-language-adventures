//make a program that receives an integer, and verifies if its even

#include<stdio.h>

int main(){
    int n=0;

    printf("Tell me the number, and i'll answer if it's even or not");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("\n%d is even!",n);
    }else{
        printf("\n%d is not even!",n);
    }


return 0;    
}