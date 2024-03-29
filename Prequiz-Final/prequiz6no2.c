#include<stdio.h>
typedef struct {
    char name[16];
    char surname[20];
    int score[5];
    float stotal;
} Student;
void readStudentData(Student *,int);
void printScore2(Student[],int);

int main()
{
    int num,i,j;
    scanf("%d",&num);
    Student infostudent[num];
    for(i=0;i<num;i++)
    {
        scanf("%s %s",infostudent[i].name,infostudent[i].surname);
        for(j=0;j<5;j++)
        {
            scanf("%d",&infostudent[i].score[j]);
        }
    }
    readStudentData(infostudent,num);

}
void readStudentData(Student *infostudent,int num)
{
    printScore2(infostudent,num);
    
}
void printScore2(Student infostudent[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("%s %d\n",infostudent[i].name,infostudent[i].score[1]);
    }
}