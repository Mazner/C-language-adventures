/*This program calculates if a number is prime*/

#include <stdio.h>

int main(){
    
    int n;
    
    printf("Tell me the number, and i'll answer if it's prime!\n");
    scanf("%d",&n);

    if (n<2){
        printf ("%d is not prime!",n); 
    }  else if (n==2) {
        printf("%d is prime!",n);
    }  else if (n>2) {
        int i=2;
        while (i<n){
            if(n%i==0){
                printf("%d is not prime!",n);
                break;
            }else{
                printf("%d is prime!",n);
                break;
            }    

            i++;
        }
    }
    getch();
    return 0;
}
