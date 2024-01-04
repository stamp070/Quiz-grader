#include <stdio.h>

int main(){
	int i,count;
	scanf("%d",&count);
	int ary[count];
	for(i=0;i<count;i++){
		scanf("%d",&ary[i]);
	}
	
	for(count;count>0;count--){
		printf("%d ",ary[count-1]);
	}
	return 0;
}
