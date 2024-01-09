#include <stdio.h>

int main(){
    int num1,num2,num3,max,min;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>=num2){
        max = num1;
        min = num2;
        if(max<num3){
            max = num3;
        }
        if(min>num3){
            min = num3;
        }
    }else{
        max = num2;
        min = num1;
        if(max<num3){
            max = num3;
        }
        if(min>num3){
            min = num3;
        }
    }
    
    printf("%d %d",max,min);
    return 0;   
}
