//make a program that converts the celsius to fahrenheit

#include <stdio.h>

int main(){
    float celsius = 0;

    printf("tell me the temperature in celsius > ");
    scanf("%f",&celsius);
    printf("The temperature in fahrenheit is : %.2f", ((celsius*9)/5)+32);
}