#include <stdio.h>
#include <math.h>

int main()
{
    int num,count=0,i,j;
    scanf("%d",&num);
    int arry[num];

    for(i=0;i<num;i++)
    {
        scanf("%d",&arry[i]);
    }
    
    int check,sum=0;
    int newarry[6];
    for(i=0;i<num;i++)
    {
        count=0;
        check = arry[i];
        while(check)
        {
            check/=10;
            count++;
        }
        
        check = arry[i];
        for(j=0;j<count;j++)
        {
            newarry[j] = check%10;
            check/=10;
        }
        sum=0;
        for(j=0;j<count;j++)
        {
            sum+=pow(newarry[j],count);
        }

        if(count>6)
        {
            printf("NO\n");
        }else if(sum==arry[i]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }


    
    
    return 0;
}