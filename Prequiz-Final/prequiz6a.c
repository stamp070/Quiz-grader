#include <stdio.h>
#include <string.h>

typedef struct {
char name[64];
char phoneNumber[32];
} phoneBook;
phoneBook directory[50];
void addRecord(char *someone, char *pnumber, int num);
char *searchPhone(char *name,int num);

int main()
{
    int num1,i;
    scanf("%d",&num1);
    char name[64],phoneNumber[64];
    for(i=0;i<num1;i++)
    {
        scanf("%s %s",name,phoneNumber);
        addRecord(name,phoneNumber,i);
    }
    int num2;
    char findname[64];
    scanf("%d",&num2);
    for(i=0;i<num2;i++)
    {
        scanf("%s",findname);
        searchPhone(findname,num1);
    }


    return 0;
}
void addRecord(char *someone,char *pnumber,int num)
{
    strcpy(directory[num].name,someone);
    strcpy(directory[num].phoneNumber,pnumber);
}
char *searchPhone(char *name,int num)
{
    int i,index,state = 0;
    for(i=0;i<num;i++)
    {
        if(!strcmp(directory[i].name,name))
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