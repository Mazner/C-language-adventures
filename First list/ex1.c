//make a program that read an integer and print it

#include <stdio.h>

int main(){
    int integer = 0;

    printf("Tell me the integer > ");
    scanf("%d",&integer);
    printf("\n The integer that you've told me is: %d",integer);

    return 0;
}