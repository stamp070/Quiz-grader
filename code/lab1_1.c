#include <stdio.h>

int main(void)
{
    float temp,cal;
    scanf("%f",&temp);
    cal = (temp-32)*5/9;
    printf("%.2f",cal);
    return 0;
}
