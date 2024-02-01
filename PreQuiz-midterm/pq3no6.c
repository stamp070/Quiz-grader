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
    int find;
    scanf("%d",&find);

    for(i=0;i<num;i++)
    {
        if(find == arry[i])
        {
            printf("(%d) ",arry[i]);
        }else{
            printf("%d ",arry[i]);
        }
    }

    return 0;
}