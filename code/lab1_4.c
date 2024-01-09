#include <stdio.h>

int main()
{
    int hour,min,sec;
    scanf("%d",&sec);
    hour = sec / 3600;
    sec %= 3600;
    min = sec / 60;

    printf("%d %d %d",hour,min,sec%60);
    return 0;
}
