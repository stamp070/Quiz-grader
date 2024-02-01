#include<stdio.h>

int main()
{
    int num1,num2,i,j,k;
    scanf("%d %d",&num1,&num2);
    int arry[num1][num2];

    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }

    int count;
    scanf("%d",&count);
    int find[count];

    for(i=0;i<count;i++)
    {
        scanf("%d",&find[i]);
    }

    int state;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            state = 0;
            for(k=0;k<count;k++)
            {
                if(arry[i][j]==find[k])
                {
                    state = 1;
                    break;
                }else{
                    state = 0;
                }
            }
            if(state)
            {
                printf("(%d) ",arry[i][j]);
            }else{
                printf("%d ",arry[i][j]);
            }
        }
        printf("\n");
    }

    return 0;   
}