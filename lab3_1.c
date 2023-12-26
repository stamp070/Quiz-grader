#include <stdio.h>


int main(){
    int num;
    scanf("%d",&num);

    for(int i=num;i>0;i--){
        for(int k=0;k<num-i;k++){
            printf(" ");
        }
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}