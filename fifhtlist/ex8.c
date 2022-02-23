/*Make a program that a reads a matrix of 5x4, in wich the lines are the students and the
collumns are as following:
1º- registration number of the student;
2º- Tests average;
3º- Works average;
4º- Final grade;
*/

#include<stdio.h>

int main(){
    float matrix[5][4];

    printf("Tell me the follwing informations:\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Registration number of the student >");
            scanf("%f",&matrix[i][j]);
            j++;
            printf("\n");
            printf("The tests average of the %.0f student >",matrix[i][j-1]);
            scanf("%f",&matrix[i][j]);
            j++;
            printf("\n");
            printf("The works of the semester average of the %.0f student >",matrix[i][j-2]);
            scanf("%f",&matrix[i][j]);
            j++;
        }
    printf("\n");
    }

    printf("The grades are:\n");
    printf("||Registration ==== test ==== works ==== average =====||\n");

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("||  %.0f  ||",matrix[i][j]);
            j++;
            printf("      ||%.2f||",matrix[i][j]);
            j++;
            printf("  ||%.2f||",matrix[i][j]);
            j++;
            if(matrix[i][j-1]+matrix[i][j-2]/2==10){
                printf("   || %.2f||      ||",(matrix[i][j-1]+matrix[i][j-2])/2);
                j++;
            }else{
            printf("    ||%.2f||      ||",(matrix[i][j-1]+matrix[i][j-2])/2);
            j++;
            }
        }
        printf("\n");
    }

    printf("||====================================================||\n");

}