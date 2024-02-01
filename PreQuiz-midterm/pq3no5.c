#include<stdio.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    int arry[3][num];

    for(i=0;i<2;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }

    for(i=0;i<num;i++)
    {
        arry[2][i]=0;
        for(j=0;j<2;j++)
        {
            arry[2][i]+=arry[j][i];
        }
    }    

    for(i=0;i<3;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("%d ",arry[i][j]);
        }
        printf("\n");
    } 

    return 0;
}