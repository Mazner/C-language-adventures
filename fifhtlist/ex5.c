/* Make a program that generates a 10x10 matrix with the following parameters:
A[i][j]=2i²+7j if i<j 
A[i][j]=3i²-1 if i=j
A[i][j]=4i³-5j² if i>j
*/

#include<stdio.h>

int main(){
    int matrix[10][10];

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i<j){
                matrix[i][j]=(2*(i*i))+(7*j);
            }else if(i==j){
                matrix[i][j]=(3*(i*i))-1;
            }else{
                matrix[i][j]=(4*(i*i*i))-(5*j);
            }
        }
    }
    printf("The matrix is:\n");
    printf("=========================================\n");

    for(int i=0; i<10; i++){
        printf("\n");
        for(int j=0; j<10; j++){
            if(j==10){
                if(matrix[i][j]>=10 && matrix[i][j]<100 || matrix[i][j]<0){
                    printf(" %d   ",matrix[i][j]);
                }else if(matrix[i][j]>=100){
                    printf(" %d ",matrix[i][j]);
                }
                else{  
                    printf("  %d    ",matrix[i][j]);
                }
            }else{
                if(matrix[i][j]>=10 && matrix[i][j]<100 || matrix[i][j]<0){
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


return 0;
}