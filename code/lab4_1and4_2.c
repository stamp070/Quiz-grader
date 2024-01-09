#include <stdio.h>

int main()
{
    int num,i,max;
    scanf("%d",&num);
    int arry[num];
    max = -100;

    for(i=0;i<num;i++)
    {
        scanf("%d",&arry[i]);
        if(arry[i]>max){
            max = arry[i];
        }
    }

    printf("%d",max);

    return 0;
}