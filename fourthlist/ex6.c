//Make a program that receives de grades of students, and show the overall average

#include<stdio.h>

int main(){
    float grades[15];

    size_t array_size = sizeof(grades) / sizeof(*grades);

    printf("Tell me the grades of the students > ");

    for(int i=0; i<array_size; i++){
        scanf("%f",&grades[i]);
        printf("> ");
    }
    float sum = 0;
    printf("The grades are:\n");
    for(int i=0; i<array_size; i++){
        if(i == array_size - 1){
            printf("%.2f",grades[i]);
            sum += grades[i];
            break;
        }else if (i==array_size/2){
            printf("\n");
        }
        printf("%.2f - ",grades[i]);
        sum += grades[i];
    }
    printf("\n");
    printf("The overall average is: %.2f",sum/array_size);

return 0;
}