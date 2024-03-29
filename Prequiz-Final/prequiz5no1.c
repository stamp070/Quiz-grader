#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    fflush(stdin);
    gets(string);
    int len = strlen(string);
    char string1[100];
    gets(string1);
    while(strcmp(string1,"end_of_string"))
    {
        int len2 = strlen(string1);
        if(len2<len)
        {
            printf("%s\n",string1);
        }
        gets(string1);
    }    

    return 0;
}
