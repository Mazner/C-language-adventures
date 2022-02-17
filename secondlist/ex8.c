/*Make a program that reads two student's grade, and if valid (0.0-10.0), show the average of them
in case of invalid, terminate the program*/

#include<stdio.h>

int main(){
    float grade1=0 ,grade2=0;

    printf("Tell me the grades, the value must be between 0.0 and 10.0 >");
    scanf("%f",&grade1);
    if(grade1 >= 0 && grade1 <= 10){
        scanf("%f",&grade2);
        if(grade2 >= 0 && grade2 <= 10){
            printf("the average is %.2f",(grade1+grade2)/2);
        }else{
            printf("invalid number!");
            return 0;
        }
    }else{
        printf("invalid number!");
        return 0;
    }
    
return 0;
}