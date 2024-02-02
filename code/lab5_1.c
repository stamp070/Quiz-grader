#include <stdio.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    int score[num][3];

    for(i=0;i<num;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&score[i][j]);
        }
    }

    int sum[num];

    for(i=0;i<num;i++)
    {
        sum[i]=0;
        for(j=0;j<3;j++)
        {
            sum[i]+=score[i][j];
        }
    }

    for(i=0;i<num;i++)
    {
        if(sum[i]>=80)
        {
            printf("A\n");
        }else if(sum[i]>=75)
        {
            printf("B+\n");
        }else if(sum[i]>=70)
        {
            printf("B\n");
        }else if(sum[i]>=65)
        {
            printf("C+\n");
        }else if(sum[i]>=60)
        {
            printf("C\n");
        }else if(sum[i]>=55)
        {
            printf("D+\n");
        }else if(sum[i]>=50)
        {
            printf("D\n");
        }else if(sum[i]>=0)
        {
            printf("F\n");
        }
    }

    return 0;
}