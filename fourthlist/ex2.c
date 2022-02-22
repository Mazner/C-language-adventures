//Make a program that receives 4 values and show them afterwards:

#include<stdio.h>

int main(){
    int array[4];
    size_t array_size = sizeof (array) / sizeof (array[0]);

    for(int i=0; i<array_size; i++){
        printf("Tell me the value of the %d position > ",i);
        scanf("%d",&array[i]);
    }
    printf("The array is > ");
    for(int i=0; i<array_size; i++){
        if(i == array_size-1){
            printf("%d",array[i]);
        }else{
            printf("%d-",array[i]);
        }
    }
return 0;
}