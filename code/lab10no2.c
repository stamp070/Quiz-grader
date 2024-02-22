#include <stdio.h>
#include <string.h>
#define MAX 50
int countVowel(char [ ]);
int eachVowel(char [ ],int arry[ ]);
void main() {
	char text[MAX];
	int cVowel,i;
	int arry[5] = {0,0,0,0,0}; //a,e,i,o,u
	printf("Enter text : ");
	scanf("%s", text);
	cVowel = countVowel(text);
	printf("Text : [%s] has %d vowels\n", text, cVowel);
	eachVowel(text,arry);
	printf("A = %d\n",arry[0]);
	printf("E = %d\n",arry[1]);
	printf("I = %d\n",arry[2]);
	printf("O = %d\n",arry[3]);
	printf("U = %d\n",arry[4]);
	
	
}
int countVowel(char t[]) {
	int i=0, count=0;
	while (i<MAX && t[i]!='\0') {
	if (t[i]=='A' || t[i]=='a' || t[i]=='E' || t[i]=='e' || t[i]=='I' || t[i]=='i' ||
		t[i]=='O' || t[i]=='o' || t[i]=='U' || t[i]=='u')
		count++;
		i++;
	}
	return(count);
}
int eachVowel(char t[],int arry[]) {
	int i;
	int numstr = strlen(t);
	
	for(i=0;i<numstr;i++)
	{
		if(t[i]=='A'||t[i]=='a')
		{
			arry[0]+=1;
		} else if(t[i]=='E' || t[i]=='e')
		{
			arry[1]+=1;
		}else if(t[i]=='I' || t[i]=='i')
		{
			arry[2]+=1;
		}else if(t[i]=='O' || t[i]=='o')
		{
			arry[3]+=1;
		}else if(t[i]=='U' || t[i]=='u')
		{
			arry[4]+=1;
		}
	}
		
}
