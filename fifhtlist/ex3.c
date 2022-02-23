/* Make a program that reads a series of numbers, and then return the location on the
matrix of the biggest value*/

#include<stdio.h>

int main(){
    int matrix[4][4];
    int flag = 0;

    printf("Tell me the numbers >");
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&matrix[i][j]);
            printf(">");
        }
    }
    flag = matrix[0][0];
    int row;
    int column;
    //searching for the biggest value...
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(flag<matrix[i][j]){
                flag=matrix[i][j];
                if(flag){
                    row = i;
                    column = j;
                }
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

//showing the location with +1 for the human eye:

    printf("The location of the biggest value is:\n%d row\n%d column",row+1,column+1);
    
return 0;
}