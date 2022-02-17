/*make a program that reads a number, and if positive, show:
            1- the square root of it
            2- the number squared
*/

#include<stdio.h>
#include<math.h>

int main(){
    double n;

    printf("tell me the number, and i'll show you the square root of it, and the number squared\n remember that the number needs to be positive!");
    scanf("%lf", &n);

    if(n>0){
        printf("The square root of %lf is: %lf\n",n,sqrt(n));
        printf("%lf squared is: %lf",n,n*n);
    }else{
        printf("Remember that the number needs to be positive!");
    }
return 0;
}
