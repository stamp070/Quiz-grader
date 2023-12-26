#include <stdio.h>

int main(void)
{
    int num1,num2,num3;
    float cal;
    scanf("%d %d %d",&num1,&num2,&num3);
    cal = (num1+num2+num3)/3;
    printf("%.3f",cal);
    return 0;
}