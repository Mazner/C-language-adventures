//Make a program that receives N, and then prints N lines of the pascal's triangle

#include<stdio.h>

int main(){

    int pascal[300];
    int n,flag = 0;

    printf("How many lines of pascal's triangle do you want?\n> ");
    scanf("%d",&n);
    if(n<0){
        return 0;
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            if(j==0 || j == i-1){
                printf("1 ");
                pascal[flag]=1;
                flag++;
            }else{
                pascal[flag]=pascal[flag-i]+pascal[flag-(i-1)];
                printf("%d ",pascal[flag]);                
                flag++;
            }
        }
        printf("\n");
    }
return 0;
}