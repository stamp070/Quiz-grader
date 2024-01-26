#include <stdio.h>

int main()
{
    int num,i,count=0;
    scanf("%d",&num);
    int binaryarry[32];

    while(num>0)
    {
        binaryarry[count]=num%2;
        num/=2;
        count++;
    }

    int checkone=0;
    for(i=count;i>=0;i--)
    {
        if(binaryarry[i]==1)
        {
            checkone++;
        }
    }

    printf("%d",checkone);



    return 0;
}