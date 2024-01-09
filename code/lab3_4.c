#include <stdio.h>

int main()
{
    float a,r,all_r,ans;
    int n,i;
    scanf("%f %f %d",&a,&r,&n);
    all_r = r;
    ans = a;
    //5
    for(i=1;i<n;i++){
        if(i==1){
            ans+=a*all_r;
        }else{
            all_r*=r;
            ans+=a*all_r;
        }
    }
    printf("%.3f",ans);
    return 0;
}