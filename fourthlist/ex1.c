//make a program that receives 6 values on the same variable, and show the sum
// as well as modifying the value on the 4th position

#include<stdio.h>

int main(){
    int a[6];
    int sum=0;

    printf("Tell me the numbers > ");
    for(int i=0; i<=5; i++){
        
        scanf("%d",&a[i]);
        
    }
    int i=0;
    for(int i=0; i<=5; i++){
        printf("a[%d] = %d \n",i,a[i]);
    }
    for(int i=0; i<15; i++){
        if(i==7){
            printf("The sum now!");
        }
        printf("|");
    }

    printf("\n");

    for(int i=0; i<=5; i++){
        int sum2;
        sum += a[i];
        if(i==0){
            printf("The first number is> %d \n",a[i]);
        }else if(i==1){
            printf("%d + %d = %d\n",a[i-i],a[i],sum);
            sum2=sum;
        }else if(i>1){
            printf("%d + %d = %d\n",sum2,a[i],sum);
            sum2=sum;
        }else{
        printf("%d is the final answer!\n",sum);
        }
    }

    printf("Tell me the value that you want to put on the fourth position > ");
    scanf("%d",&a[3]);

    printf("The array is now: ");
    for(int i=0; i<6; i++){
        if(i==5){
            printf("%d\n",a[i]);
            break;
        }
        printf("%d-",a[i]);
    }

return 0;

}