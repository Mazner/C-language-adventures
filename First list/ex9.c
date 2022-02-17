//make a program that converts celsius to kelvin

#include <stdio.h>

int main(){
    
    float celsius;

    printf("tell me the temperature in celsius > ");
    scanf("%f",&celsius);
    printf("the tempareture equals to %.2f kelvin",celsius+273.15);

    return 0;
}