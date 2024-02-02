#include <stdio.h>

int main()
{
    int num,i,j,k;
    scanf("%d",&num);
    int arry[num][2];

    for(i=0;i<num;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }

    int time,maxmovie[num];
    for(i=0;i<num;i++)
    {
        time=0;
        for(j=0;j<num;j++)
        {
            if(i!=j)
            {
                for(k=arry[i][0];k<=arry[i][1];k++)
                {
                    if(k>=arry[j][0]&&k<=arry[j][1])
                    {
                        time++;
                        break;
                    }
                }
            }
        }
        maxmovie[i]=time;
    }

    int temp;
    for(i=0;i<num;i++)
    {
        temp=0;
        for(j=i+1;j<num;j++)
        {
            if(maxmovie[i]<maxmovie[j])
            {
                temp=maxmovie[i];
                maxmovie[i]=maxmovie[j];
                maxmovie[j]=temp;
            }
        }
    }
    printf("%d",maxmovie[0]+1);


    return 0;
}