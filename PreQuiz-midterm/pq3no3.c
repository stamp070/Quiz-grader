#include <stdio.h>

int main()
{
    int num1,num2,i,j,k;
    scanf("%d %d",&num1,&num2);
    int arry1[num1][num2];

    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            scanf("%d",&arry1[i][j]);
        }
    }

    int count;
    scanf("%d",&count);
    int arry2[count];

    for(i=0;i<count;i++)
    {
        scanf("%d",&arry2[i]);
    }

    int state;
    for(i=0;i<count;i++)
    {
        state=1;
        for(j=0;j<num1;j++)
        {
            for(k=0;k<num2;k++)
            {
                if(arry1[j][k]>arry2[i])
                {
                    state = 0;
                    printf("%d ",arry1[j][k]);
                }
            }
        }
        if(state)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}