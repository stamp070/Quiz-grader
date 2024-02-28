#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkUpper(char text[100][100],int loop);
int main()
{
    int num,i,j;
    scanf("%d",&num);
    char text[100][100];
    for(i=0;i<num;i++)
    {
        scanf("%s",text[i]);
    }
    
    int index = checkUpper(text,num);
    printf("%s",text[index]);
    

    return 0;
}
int checkUpper(char text[100][100],int loop)
{
    int num;
    int i,j,count=0,max=0,indexmax;
    for(i=0;i<loop;i++)
    {
        num = strlen(text[i]);
        count=0;
        for(j=0;j<num;j++)
        {
            if(islower(text[i][j]))
            {
                count++;
            }
        }
        if(count == num)
        {
            if(count>max)
            {
                max=count;
                indexmax=i;
            }
        }
    }
    return indexmax;
}