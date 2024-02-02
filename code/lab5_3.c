#include <stdio.h>

int main()
{
    int num,count=0;
    scanf("%d",&num);
    int check=num;
    
    while(num)
    {
        num/=10;
        count++;
    }
    if(num==0&&check==0)
    {
        printf("1");
    }else{
        printf("%d",count);
    }
    return 0;
}