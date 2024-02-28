#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkUpper(char text[100]);
int main()
{
    int num,i,j;
    scanf("%d",&num);
    char text[100][100];
    for(i=0;i<num;i++)
    {
        scanf("%s",text[i]);
    }
    for(i=0;i<num;i++)
    {
        if(checkUpper(text[i]))
        {
            printf("%s\n",text[i]);           
        }
    }
    
    return 0;
}
int checkUpper(char text[100])
{
    int num = strlen(text);
    int i,count=0;
    for(i=0;i<num;i++)
    {
        if(islower(text[i]))
        {
            count++;
        }
    }
    if(count==num)
    {
        return 1;
    }else{
        return 0;
    }
}