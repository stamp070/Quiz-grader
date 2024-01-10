#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f %f",&a,&b);
    c = sqrt(a*a+b*b);
    printf("%.6f",c);

    return 0;
}