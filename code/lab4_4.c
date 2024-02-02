#include <stdio.h>

int main()
{
    int num,i,j,k;
    scanf("%d",&num);
    int arry1[num][num],arry2[num][num];

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&arry1[i][j]);
        }
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&arry2[i][j]);
        }
    }

    int newarry[num][num],sum=0;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            sum=0;
            for(k=0;k<num;k++)
            {
                sum+=arry1[i][k]*arry2[k][j];
            }
            newarry[i][j]=sum;
        }
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("%d ",newarry[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}