//make a program that calculate the sum of the 3 informed integers

#include<stdio.h>

int main(){

    int number=0;
    int sum=0;

    printf("tell me the first number > ");
    scanf("%d",&number);
    sum += number;
    printf("\ntell me the second number > ");
    scanf("%d",&number);
    sum += number;
    printf("\ntell me the third one > ");
    scanf("%d",&number);
    sum += number;
    printf("\nthe sum of the three numbers is: %d ",sum);



    return 0;   
}