#include <stdio.h>

int main()
{
    int num1,num2,num3,one,two,three;
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if(num1<num2 && num1<num3){
        one = num1;
        if (num2<num3){
            two = num2;
            three = num3;
        }else{
            two = num3;
            three = num2;
        }
    }else if(num2<num1 && num2<num3){
        one = num2;
        if(num1<num3){
            two = num1;
            three = num3;
        }else{
            two = num3;
            three = num1;
        }
    }else{
        one = num3;
        if(num2<num1){
            two = num2;
            three = num1;
        }else{
            two = num1;
            three = num2;
        }
    }
    printf("%d %d %d",one,two,three);

    return 0;
}