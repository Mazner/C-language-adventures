/*Make a program that reads an N integer, and show the N even numbers*/

#include<stdio.h>

int main(){
    int n;
    int count =1;

    printf("Tell me the number of even numbers that you want, from 0 to n > ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        if(i%2==0){
            printf("%d- %d is even\n",count,i);
            count++;
        }else{
            n++;
        }
    }
return 0;

}