#include <stdio.h>

int main()
{
    int num,i;
    scanf("%d",&num);
    int arry[num];

    for(i=0;i<num;i++)
    {
        scanf("%d",&arry[i]);
    }

    int more;
    scanf("%d",&more);

    for(i=0;i<num;i++)
    {
        if(arry[i]>more)
        {
            printf("%d ",i+1);
        }
    }

    return 0;
}