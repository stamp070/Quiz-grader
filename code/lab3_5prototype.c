#include <stdio.h>

int main()
{
    //prototype
    int num,i;
    int back1=0,back2=1,here=0;

    scanf("%d",&num);
    printf("0 ");
    for(i=0;i<num;i++){
        here = back1+back2;
        if(num==1){
            printf("1 ");
        }
        if(here<num){
            if(i%2==0){
                back2=here;
            }else{
                back1=here;
            }
            printf("%d ",here);
        }
    }

    return 0;
}