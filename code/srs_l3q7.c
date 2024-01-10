#include <stdio.h>

int main()
{
    int num1,num2,max,i,temp;
    scanf("%d %d",&num1,&num2);

    if(num1>num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(i=1;i<=num1;i++){
        if(num1 % i == 0 && num2 % i == 0)
        {
            max = i;
        }
    }
    
    printf("%d",max);

    return 0;
}