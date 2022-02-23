/* Make a program that calculates the transpose matrix of a given 3x3 matrix*/

#include<stdio.h>

int main(){
    int matrix[3][3];
    int transpose[3][3];

    printf("Tell me the numbers, and i'll show you the transpose matrix of it");

    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf(">");
            scanf("%d",&matrix[i][j]);
        }
    }
 printf("The matrix is:\n");
    printf("=========================================\n");

    for(int i=0; i<3; i++){
        printf("\n"); 
        for(int j=0; j<3; j++){
            if(j==3){
                if(matrix[i][j]>=10 && matrix[i][j]<100){
                    printf("  %d \n",matrix[i][j]);
                }else if(matrix[i][j]>=100){
                    printf(" %d ",matrix[i][j]);
                }
                else{  
                    printf("  %d  \n",matrix[i][j]);
                }
            }else{
                if(matrix[i][j]>=10 && matrix[i][j]<100){
                    printf("  %d ",matrix[i][j]);
                }else if(matrix[i][j]>=100){
                    printf(" %d ",matrix[i][j]);
                }
                else{  
                    printf("  %d  ",matrix[i][j]);
                }
            }
        }
    }
     
    printf("\n=========================================\n");

    
    int temp =0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    printf("The transpose matrix is:\n");
    printf("=========================================\n");

    for(int i=0; i<3; i++){
        printf("\n"); 
        for(int j=0; j<3; j++){
            if(j==3){
                if(transpose[i][j]>=10 && transpose[i][j]<100){
                    printf("  %d \n",transpose[i][j]);
                }else if(transpose[i][j]>=100){
                    printf(" %d ",transpose[i][j]);
                }
                else{  
                    printf("  %d  \n",transpose[i][j]);
                }
            }else{
                if(transpose[i][j]>=10 && transpose[i][j]<100){
                    printf("  %d ",transpose[i][j]);
                }else if(transpose[i][j]>=100){
                    printf(" %d ",transpose[i][j]);
                }
                else{  
                    printf("  %d  ",transpose[i][j]);
                }
            }
        }
    }
     
    printf("\n=========================================\n");

return 0;
}