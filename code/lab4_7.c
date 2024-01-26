#include <stdio.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    int arry[num][num];
    
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }

    int plus[2][num];
    int plusrow,pluscolumn;

    for(i=0;i<num;i++)
    {
        plusrow=0;
        pluscolumn=0;
        
        for(j=0;j<num;j++)
        {
            plusrow+=arry[i][j];
            pluscolumn+=arry[j][i];
        }
        plus[0][i] = plusrow;
        plus[1][i] = pluscolumn;
    }
    int state = 0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<num;j++)
        {
            if(plus[i][0]!=plus[i][j])
            {
                state = 1;
                break;
            }
        }
    }
    if(state == 0)
    {
        printf("yes");
    }else{
        printf("no");
    }
    
    return 0;
}