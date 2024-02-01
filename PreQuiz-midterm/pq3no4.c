#include <stdio.h>

int main()
{
    int num,i;
    scanf("%d",&num);
    int arry1[num];
    int arry2[num];

    for(i=0;i<num;i++)
    {
        scanf("%d",&arry1[i]);
    }
    for(i=0;i<num;i++)
    {
        scanf("%d",&arry2[i]);
    }

    for(i=0;i<num;i++)
    {
        printf("%d ",arry1[i]+arry2[i]);
    }

    return 0;
}