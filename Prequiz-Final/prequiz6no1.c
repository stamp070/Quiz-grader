#include <stdio.h>
#include <string.h>
typedef struct {
    char name[64];
    char phoneNumber[32];
} phoneBook;
phoneBook directory[50];
void addRecord(char *someone, char *pnumber,int count);
char *searchPhone(char *name,int loop);

int main()
{
    int num,i;
    scanf("%d", &num);
    char name[50],phonenum[50];
    for(i=0;i<num;i++)
    {
        scanf("%s %s",name,phonenum);
        addRecord(name,phonenum,i);
    }
    int findnum;
    scanf("%d", &findnum);
    char find[50];
    for(i=0;i<findnum;i++)
    {
        scanf("%s",find);
        searchPhone(find,num);
    }

    return 0;
}
void addRecord(char *someone, char *pnumber,int count)
{
    strcpy(directory[count].name,someone);
    strcpy(directory[count].phoneNumber,pnumber);
}
char *searchPhone(char *name,int loop)
{
    int i,state=0,index;
    for(i=0;i<loop;i++)
    {
        if(!strcmp(name,directory[i].name))
        {
            state = 1;
            index = i;
        }
    }
    if(state)
    {
        printf("%s\n",directory[index].phoneNumber);
    }else{
        printf("N/A\n");
    }
}