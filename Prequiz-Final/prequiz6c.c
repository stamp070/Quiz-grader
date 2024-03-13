#include <stdio.h>
#include <string.h>

typedef struct {
char name[16];
char surname[20];
int score[5];
float stotal;
} Student;

void readStudentData(Student *record,char *name,char *surname,int score[5]);
void printMaxScore(Student *record, int testnum, int loomnum);

int main()
{
    int num1,i,j;
    scanf("%d",&num1);
    Student record[num1];
    char name[16],surname[20];
    int score[5];
    for(i=0;i<num1;i++)
    {
        scanf("%s %s",name,surname);
        for(j=0;j<5;j++)
        {
            scanf("%d",&score[j]);
        }
        readStudentData(&record[i],name,surname,score);
    }
    int num2;
    scanf("%d",&num2);
    for(i=0;i<num2;i++)
    {
        int find;
        scanf("%d",&find);
        printMaxScore(record,find,num1);
    }
    return 0;
}
void readStudentData(Student *record,char *name,char *surname,int score[5])
{
    strcpy(record->name, name);
    strcpy(record->surname, surname);
    int i;
    for(i=0;i<5;i++)
    {
        record->score[i] = score[i];
    }
    
}
void printMaxScore(Student *record, int testnum,int loopnum)
{
    testnum -= 1;
    int i,index=0,max = 0;
    for(i=0;i<loopnum;i++)
    {
        if(record[i].score[testnum]>max)
        {
            max = record[i].score[testnum];
            index = i;
        }
    }
    printf("%s %d\n",record[index].name,record[index].score[testnum]);
}