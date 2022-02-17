//make a program that converts km/h to m/s

#include<stdio.h>

int main(){
    float speed;

    printf("Tell me the speed in km/h ");
    scanf("%f",&speed);
    printf("\n the speed in m/s is: %.2f",speed/3.6);


return 0;
}