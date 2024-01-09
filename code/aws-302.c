#include <stdio.h>

int main(){
	int i,count;
	scanf("%d",&count);
	int ary[count];
	for(i=0;i<count;i++){
		scanf("%d",&ary[i]);
	}
	// a
	
	printf("a) ");
	for(i=0;i<4;i++){
		printf("%d ",ary[i]);
	}
	printf("\n");
	
	//b
	printf("b) ");
	for(i=0;i<count;i++){
		if(ary[i]>ary[2])
		{
			printf("%d ",ary[i]);
		}
	}
	printf("\n");
	
	//c
	printf("c) ");
	for(i=0;i<count;i++){
		if(ary[i]>ary[2])
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	
	//d
	int d_count = count+1;
	int d_ary[d_count];
	for(i=0;i<d_count;i++){
		d_ary[i] = ary[i];
	}
	d_ary[d_count-1] = ary[2] + ary[3];
	printf("d) ");
	for(i=0;i<d_count;i++){
		printf("%d ",d_ary[i]);
	}
	printf("\n");
	
	//e
	d_ary[3] = d_ary[4]-d_ary[2];
	printf("e) ");
	for(i=0;i<d_count;i++){
		printf("%d ",d_ary[i]);
	}
	printf("\n");
	
	//f
	printf("f) ");
	if(d_ary[1]>d_ary[5])
	{
		printf("2\n");
	}else{
		printf("6\n");
	}
	
	//g
	int temp;
	temp = d_ary[1];
	d_ary[1] = d_ary[d_count-1];
	d_ary[d_count-1] = temp;
	printf("g) ");
	for(i=0;i<d_count;i++){
		printf("%d ",d_ary[i]);
	}
	printf("\n");
	
	//h
	int new[d_count];
	int j=0;
	for(i=0;i<d_count;i++){
		if(d_ary[i]%2 == 0)
		{
			new[j] = d_ary[i];
			j+=1;
		}
	}
	printf("h) new=[");
	for(i=0;i<j;i++){
		if(i==j-1){
			printf("%d",new[i]);
		}else{
			printf("%d ",new[i]);
		}
	}
	printf("]\n");
	return 0;
}
