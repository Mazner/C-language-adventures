/*Make a program that reads 6 even numbers, and then show the numbers
in inverse order */

#include <stdio.h>

int main(){
    int array[6];

    size_t array_size = sizeof(array)/sizeof (*array);

    printf("Tell me the even numbers > ");
    for(int i=0; i<array_size; i++){
        scanf("%d",&array[i]);
        if(array[i] % 2 !=0){
            printf("Not an even number!\n");
            i--;
        }
    }
    printf("This is the array on the informed order > ");
    for(int i=0; i<array_size; i++){
        if(i==array_size-1){
            printf("%d\n",array[i]);
            break;
        }
        printf("%d-",array[i]);
    }
    printf("Now this is the array inverted > ");

    for(int i=array_size-1; i>=0; i--){
        if(i==0){
            printf("%d",array[i]);
            break;
        }
        printf("%d-",array[i]);
    }


return 0;
}