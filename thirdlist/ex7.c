//Make  program that reads an N number, and prints N to 0

#include<stdio.h>

int main(){
    int n;

    printf("tell me the number!");
    scanf("%d",&n);

    for (int i=n; i>=0; i--){
        printf("%d\n",i);
    }


return 0;
}