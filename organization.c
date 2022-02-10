/*This algorithmn organizes arrays in crescent order*/

#include <stdio.h>

int main(){
    int array[8]; 
    
    for(int i=0; i<sizeof array/ sizeof array[0]; i++){
        printf("Type the number on the position: %d> ",i);
        scanf("%d",&array[i]);
        printf("\n");
    }
        printf("Before:\n");
    for(int i=0; i<sizeof array/ sizeof array[0]; i++){
        printf("%d-",array[i]);
    }
        printf("\n\After:\n");

    for(int i=0; i<=sizeof array/ sizeof array[0]; i++){
        if (array[i]>array[i+1]){
            int temp = array[i];
            array[i] = array[i+1];
            array[i+1]=temp;
            temp = 0;
            i=-1;
        }
    }
    for(int i=0; i<sizeof array/ sizeof array[0]; i++){
        printf("%d-",array[i]);
    }
    getch();
  return 0;
}