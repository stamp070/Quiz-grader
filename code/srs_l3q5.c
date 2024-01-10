#include <stdio.h>

int main()
{
    int num,i,arry[7] = {1000,500,100,50,20,10,1};
    int ans[7];
    scanf("%d",&num);

    for(i=0;i<7;i++)
    {
        ans[i] = num / arry[i];
        num = num % arry[i];
        printf("%d ",ans[i]);
    }

    return 0;
}