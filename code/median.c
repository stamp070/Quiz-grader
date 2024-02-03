#include <stdio.h>

int main()
{
    int num,i,j,temp;
    scanf("%d",&num);
    int arry[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arry[i]);
    }
    
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arry[i]>arry[j])
            {
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }

    if(num%2==1)
    {
        printf("%d",arry[(num-1)/2]);
    }else{
        printf("%d",(arry[num/2-1]+arry[num/2])/2);
    }

    return 0;
}