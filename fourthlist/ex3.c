/*Make a program that reads a collection of 10 real numbers, and then
show the square of them, and store on another array*/

#include<stdio.h>

int main(){
    float array[10];
    float squared_array[10];

    size_t size_array = sizeof (array)/sizeof(*array);
    size_t size_square_array= sizeof(squared_array)/sizeof (*squared_array);
    
    printf("Tell me the numbers, and i'll the square of each one of them ");
    for(int i=0; i<size_array; i++){
        printf("> ");
        scanf("%f",&array[i]);
    } 
    printf("This is the first vector > ");
    for(int i=0; i<size_array; i++){
        if(i == size_array-1){
            printf("%.2f",array[i]);
            break;
        }
        printf("%.2f-",array[i]);
    }
    printf("\n");

    for(int i=0; i<size_array; i++){
        squared_array[i] = array[i]*array[i];
    }
    printf("This is the squared vector > ");
    for(int i=0; i<size_square_array; i++){
        if(i == size_square_array-1){
            printf("%.2f",squared_array[i]);
            break;
        }
        printf("%.2f-",squared_array[i]);
    }
       
return 0;
}