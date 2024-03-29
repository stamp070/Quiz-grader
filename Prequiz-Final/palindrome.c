#include <stdio.h>
#include <string.h>
#include <ctype.h>

int len(char *,char *);
void pallindrome(char string[1000],int len);
int main()
{
    int i,num;
    scanf("%d ", &num);
    char string[1000];
    char newstr[1000];

    for(i=0;i<num;i++)
    {
        gets(string);
        int lenght = len(string,newstr);
        pallindrome(newstr,lenght);
    }
    return 0;
}
void pallindrome(char string[1000],int len)
{
    int loop = len / 2;
    int state=0,i;
    for(i=0;i<loop;i++)
    {
        if(tolower(string[i])!=tolower(string[len-i-1]))
        {
            state = 1;
        }
    }
    if(state)
    {
        printf("not pallindrome\n");
    }else{
        printf("pallindrome\n");

    }
}
int len(char *string,char *newstr)
{
    int i,len=strlen(string);
    int newlen=0;
    for(i=0;i<len;i++)
    {
        if(isalnum(string[i]))
        {
            newstr[newlen]=string[i];
            newlen++;
        }
    }
    return newlen;
}

