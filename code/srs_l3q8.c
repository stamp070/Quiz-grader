#include <stdio.h>

int main()
{
    int x,y,ans;
    scanf("%d %d",&x,&y);
    if(y % x != 0 ){
        ans = (y/x)+1;
    }else{
        ans = y/x;
    }
    printf("%d",ans);
    return 0;
}