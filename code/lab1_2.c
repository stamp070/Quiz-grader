#include <stdio.h>

int main(void)
{
    int rad;
    float area;
    scanf("%d",&rad);
    area = 3.14159 * (rad*rad);
    printf("%.2f",area);
    return 0;
}
