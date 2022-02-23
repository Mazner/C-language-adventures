//Make a program that reads a 4x4 matrix and write how many integer are bigger than 10

#include<stdio.h>

int main(){
    int matrix[4][4];
    int count=0;

    printf("Tell me the values>");
    for(int i=0;i<4;i++){
        for(int j=0; j<4; j++){
            scanf("%d",&matrix[i][j]);
            printf(">");
            if(matrix[i][j]>10){
                count++;
            }
        }
    }
    printf("The matrix is:\n");
    printf("=========================================\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j==3){
                if(matrix[i][j]>=10){
                    printf("  %d \n",matrix[i][j]);
                }else{  
                    printf("  %d  \n",matrix[i][j]);
                }
            }else{
                if(matrix[i][j]>=10){
                    printf("  %d ",matrix[i][j]);
                }else{  
                    printf("  %d  ",matrix[i][j]);
                }
            }
        }
    }
    printf("=========================================\n");
    printf("\nThere are %d values bigger than 10!",count);
}