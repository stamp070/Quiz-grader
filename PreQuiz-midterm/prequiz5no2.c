#include<stdio.h>
#include<string.h>

int findnum(char []);
int main()
{
    char input[100];
    fflush(stdin);
    gets(input);
    printf("%d\n",findnum(input));
    int num,i;
    scanf("%d", &num);
    char string[100];
    for(i=0;i<=num;i++)
    {
        gets(string);
        if(findnum(string)==findnum(input))
        {
            printf("%s\n",string);
        }
    }
}
int findnum(char string[])
{
    int i,count=0;
    int len = strlen(string);
    for(i=0;i<len;i++)
    {
        if(string[i]>='0'&&string[i]<='9')
        {
            count += string[i]-48;
        }
    }
    return count;
}
