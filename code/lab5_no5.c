#include <stdio.h>

int main(){
	int i,j,num1,num2;
	scanf("%d %d",&num1,&num2);
	int ary[num1][num2];
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			scanf("%d",&ary[i][j]);
		}
	}
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			printf("%d ",ary[i][j]+1);
		}
		printf("\n");
	}
	
	return 0;
}
