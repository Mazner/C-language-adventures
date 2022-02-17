/*make a program that shows whats the biggest number between two of them, and
in case they are equal, shows a message that says that they're equal*/

#include<stdio.h>

int main(){
    double a=0, 
           b=0;
    printf("tell me the numbers > ");
    scanf("%lf",&a);
    printf(" ");
    scanf("%lf",&b);
    
    if(a>b){
        printf("%\nlf is bigger than %lf",a,b);
    }else if(a<b){
        printf("\n%lf is bigger than %lf",b,a);
    }else{
        printf("\nThey are equal");
    }

return 0;
}