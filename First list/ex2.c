//make a program that can read a real number and print it
#include <stdio.h>

int main(){
    float real_number = 0;

    printf("tell me the real number > ");
    scanf("%f",&real_number);
    printf("\nThe number that you've informed me is > %f",real_number);


    return 0;
}