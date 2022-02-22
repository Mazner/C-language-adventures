//Make a program that reads 10 values, and print the elements, unless they're repeated

#include<stdio.h>

int main(){
    int array[10];
    int count=0;

    size_t array_size = sizeof(array)/sizeof(*array);

    printf("Tell me the numbers >");

    for(int i=0; i<array_size; i++){
        scanf("%d", &array[i]);
        printf(">");
    }
    printf("Those are the numbers in the array, excluding the repeated ones> ");

    for(int i=0; i<array_size-1; i++){
        int temp;
        if (array[i]>array[i+1]){
            int temp = array[i];
            array[i] = array[i+1];
            array[i+1]=temp;
            temp = 0;
            i=-1;
      }
    }
    
    int j=0;
    int temp_array[array_size];
    for(int i=0; i<array_size; i++){
        temp_array[i]=array[i];
    }

    for(int i=0; i<array_size; i++){
        if(array[i]==temp_array[i+1]){

            for(j=0; j<array_size; j++){

                if(array[i] != temp_array[j]){
                    count++;
                    break;

                }else{
                    count++;
                    j++;
                    array[array_size-count]=temp_array[j];
                }

            }
        }else{
            array[count]=temp_array[i];
            count++;
        }
    }

    for(int i=0; i<count; i++){
        printf("%d- ",array[i]);
    }

}