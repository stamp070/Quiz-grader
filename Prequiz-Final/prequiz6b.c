#include <stdio.h>
#include <string.h>

typedef struct {
    char name[16];
    char surname[20];
    int score[5];
    float stotal;
} Student;

void readStudentData(Student *record,char *name,char *surname,int score[5]);
void printScore2(Student record);

int main()
{
    int num,i,j;
    char name[64],surname[32];
    int score[5];
    scanf("%d",&num);
    Student record[num];
    for(i=0;i<num;i++)
    {
        scanf("%s %s",name,surname);
        for(j=0;j<5;j++)
        {
            scanf("%d",&score[j]);
        }    
        readStudentData(&record[i],name,surname,score);
    }
    for(i=0;i<num;i++)
    {
        printScore2(record[i]);
    }
    return 0;
}

void readStudentData(Student *record,char *name,char *surname,int score[5])
{
    strcpy(record->name,name);
    strcpy(record->surname,surname);
    int i;
    for(i=0;i<5;i++)
    {
        record->score[i]=score[i];
    }
}
void printScore2(Student record)
{
    int i;
    printf("%s %d\n",record.name,record.score[1]);
    
    
}