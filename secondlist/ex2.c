//make a program that calculates the square root of a number

#include<stdio.h>
#include<math.h>

int main(){
    float number;

    printf("Tell me the number > ");
    scanf("%f",&number);

    if(number>0){
        printf("the square root of %f is %f",number,sqrt(number));
    }else{
        printf("Invalid number!");
    }

    return 0;
}