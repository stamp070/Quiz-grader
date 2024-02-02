#include <stdio.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    int arry[num][num-1];

    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    
    int sum[num];
    for(i=0;i<num;i++)
    {
        sum[i]=0;
        for(j=0;j<num-1;j++)
        {
            sum[i]+=arry[i][j];
        }
    }

    int max=0,win;  
    for(i=0;i<num;i++)
    {
        if(sum[i]>max)
        {
            max=sum[i];
            win = i+1;
        }
    }
    printf("%d %d",win,max);
}