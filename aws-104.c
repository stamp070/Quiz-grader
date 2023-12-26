#include <stdio.h>

int main(void){
    int year;
    float grade;
    char help;

    scanf("%d %f %c",&year,&grade,&help);
    if (grade>3.00){
        printf("approved\n");
    }else{
        if(year>=2 && grade>2.50 && help=='Y'){
            printf("approved\n");
        }else{
            printf("not approved\n");
            if(year<2 && grade>2.50 && help=='Y'){
                printf("year < 2\n");
            }else if(help=='N'){
                printf("no help\n");
            }else if(grade<=2.5){
                printf("grade < 2.50\n");
            }
        }
    }
}