//Make a program that show wich number is bigger:

#include <stdio.h>

int main(){
    int a,b;

    printf("tell me the numbers! > ");
    scanf("%d",&a);
    printf("-");
    scanf("%d",&b);

    if(a>b){
        printf("\n%d is the bigger than %d",a,b);
    }else{
        printf("\n%d is bigger than %d",b,a);
    }

return 0;

}