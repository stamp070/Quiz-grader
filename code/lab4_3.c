#include <stdio.h>

int main()
{
    int num1,num2,ans,i,j;
    scanf("%d %d",&num1,&num2);
    int arry[num1];
    ans=0;

    for(i=0;i<num1;i++)
    {
        scanf("%d",&arry[i]);
    }

    for(i=0;i<num1;i++)
    {
        for(j=i+1;j<num1;j++)
        {
            if(arry[i]+arry[j]==num2)
            {   
                ans++;
            }
        }
    }
    
    if(ans!=0){
        printf("%d",ans);
    }else{
        printf("-1");
    }

    return 0; 
}