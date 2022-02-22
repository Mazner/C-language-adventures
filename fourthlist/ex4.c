/*Make a program that reads 8 values, and then reads two values of position
inputed by the user and show the value on that specific position*/

#include<stdio.h>

int main(){
    float array[8];
    
    size_t size_array = sizeof (array)/ sizeof (*array);

    printf("Tell me the values of the array > ");

    for(int i=0; i<size_array; i++){
        scanf("%f",&array[i]);
        printf("> ");
    }

    printf("The array is: ");

    for(int i=0; i<size_array; i++){
        if(i==size_array-1){
            printf("%.2f",array[i]);
            break;
        }
        printf("%.2f - ",array[i]);
    }
    int pos_a;
    int pos_b;

    printf("\n");
    printf("What is the positions of the values that you want?");

    printf("\n");
    printf("First position > ");
    scanf("%d",&pos_a);

    if(pos_a >= 0 && pos_a <= size_array){
        printf("\n");
        printf("Second position > ");
        scanf("%d",&pos_b);
        
        if(pos_b >= 0 && pos_b <= size_array){
            printf("The value of the %d position is: %.2f\n",pos_a,array[pos_a]);
            printf("The value of the %d position is: %.2f\n",pos_b,array[pos_b]);
        }else{
            printf("Invalid position!");
            return 0;
        }
    }else{
        printf("Invalid position");
        return 0;
    }

return 0;
}