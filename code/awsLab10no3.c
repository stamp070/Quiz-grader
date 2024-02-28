#include<stdio.h>
#include<string.h>
#include<ctype.h>

int checklogin(char log[100]);
int checkpass(char pass[100]);
int main()
{
    int num,i,count;
    scanf("%d",&num);
    char login[num+1][100],pass[num+1][100];
    char all[100];
    while (getchar() != '\n');

    for(i=0;i<num;i++)
    {
        gets(all);
        count = 0;
        char *token = strtok(all,":");
        strcpy(login[i],token);
        token = strtok(NULL," ");
        strcpy(pass[i],token);
    }

    
    for(i=0;i<num;i++)
    {
        int log = checklogin(login[i]);
        int password = checkpass(pass[i]);
        if(log==1&&password==1)
        {
            printf("%s\n",login[i]);
        }
    }

    return 0;
}
int checklogin(char log[100])
{
    int len = strlen(log);
    int i,punct=0;
    for(i=0;i<len;i++)
    {
        if(ispunct(log[i]))
        {
            punct++;
        }
    }
    if(len==4 && !isdigit(log[0]) && punct==0)
    {
        return 1;
    }else{
        return 0;
    }
}
int checkpass(char pass[100])
{
    int i;    
    int len = strlen(pass);
    int upper=0,digit=0,punct=0;
    if(len>=4 && len<=8)
    {
        for(i=0;i<len;i++)
        {
            if(isupper(pass[i]))
            {
                upper++;
            }if(isdigit(pass[i]))
            {
                digit++;
            }if(ispunct(pass[i]))
            {
                punct++;

            }
        }
    }
    if(digit>=2&&upper>=1&&punct==0)
    {
        return 1;
    }else{
        return 0;
    }
}