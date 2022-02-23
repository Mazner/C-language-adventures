//make a program that puts on a 5x5 matrix a 1 on its primary diagonal, and 0 everywhere else
//then print it

#include<stdio.h>

int main(){
    int matrix[5][5];
    int diagonal =0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==j){
                matrix[i][j]=1;
                printf(" 1 ");
            }else{
                matrix[i][j]=0;
                printf(" 0 ");
            }
            
        }
        printf("\n");
    }

}