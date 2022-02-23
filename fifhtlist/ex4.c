/*Make a program that receives a matrix 4x4 and then, asks the user
a number to search, if the program doesn't find the number, tell the 
user that it hasn't found if it has found, show the location*/

#include<stdio.h>

int main(){
    int matrix[4][4];
    int flag = 0;
    int flag2 = 0;

    printf("Tell me the numbers >");
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&matrix[i][j]);
            printf(">");
        }
    }

    printf("Tell me the number that you want me to find! >");
    scanf("%d",&flag);

    int row[16];
    int column[16];


//searching for the biggest value...
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(flag==matrix[i][j]){
                row[flag2] = i;
                column[flag2] = j;
                flag2++;
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
    if (flag2){
        for(int i=0; i<flag2;i++)
        printf("The location of the number that you've told me is:\n%d row\n%d column\n",row[i],column[i]);
        printf("\n");
    }else{
        printf("I couldn't find the number, are you sure you typed it?\n");
    }
return 0;
}
