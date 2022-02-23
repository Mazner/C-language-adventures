/*Make a program that receives a matrix 3x3 and calculate the sum of it's 
elements above the main diagonal*/

#include<stdio.h>

int main(){
    int matrix[3][3];

    printf("Tell me the numbers, and i'll calculate the sum of the elements above the main diagonal");

    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf(">");
            scanf("%d",&matrix[i][j]);
        }
    }
    
        int sum=0;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(j>i){
                sum += matrix[i][j];
            }
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
    printf("\nThe sum of the main diagonal is>%d",sum);

return 0;
}