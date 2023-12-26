#include <stdio.h>

int main()
{
    float bmi,w,h;
    scanf("%f %f",&w,&h);
    bmi = w/(h*h);
    if(bmi>=30){
        printf("obese");
    }
    else if(bmi>=25) {
        printf("overweight");
    }
    else if(bmi>=18.6){
        printf("normal weight");
    }else{
        printf("underweight");
    }
    return 0;
}