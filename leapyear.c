/*this algorithmn calculates if the year is a leap year*/

#include <stdio.h>

int main(){
    int year;
    printf("Tell me the year, and i'll tell if it's a leap year or not > ");
    scanf("%d",&year);
    printf("\n");

    if(year % 100 == 0 && year % 400 ==0){
        printf("%d is a leap year!",year);
        
    }else if (year % 4 == 0 && year % 100 != 0){
        printf("%d is a leap year!",year);
    }else{
        printf("%d is not a leap year!",year);
    }
    


}
