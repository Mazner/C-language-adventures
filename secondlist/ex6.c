//Make a program that show the bigger number between two, and show the difference between then

#include<stdio.h>

int main(){
    double a,b;

    printf("Tell me the numbers!");
    scanf("%lf",&a);
    scanf("%lf",&b);

    if(a>b){
        printf("%lf is bigger than %lf",a,b);
        printf("\nThe difference between them is %lf",a-b);
    }else{
        printf("%lf is bigger than %lf",b,a);
        printf("\nThe difference between them is %lf",b-a);
    }

return 0;
}