#include <stdio.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    int arry1[num];

    for(i=0;i<num;i++)
    {
        scanf("%d",&arry1[i]);
    }

    int count=0,check;
    scanf("%d",&check);
    int arry2[100];

    while(check!=-1)
    {
        arry2[count] = check;
        count++;
        scanf("%d",&check);
    }

    int state=1;

    for(i=0;i<count;i++)
    {
        state=1;
        for(j=0;j<num;j++)
        {
            if(arry2[i]<arry1[j])
            {
                state=0;
                printf("%d ",j+1);
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