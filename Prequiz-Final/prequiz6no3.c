#include<stdio.h>
typedef struct {
char name[16];
char surname[20];
char score[5];
float stotal;
} Student;
void readStudentData(Student *,int);
void printMaxScore(Student *, int,int);
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
void readStudentData(Student *infostudent,int loop)
{
    int i,num,find;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&find);
        printMaxScore(infostudent,loop,find);
    }
}
void printMaxScore(Student *infostudent,int loop,int find)
{
   int i,max=0,indexmax;
   for(i=0;i<loop;i++)
   {
        if(infostudent[i].score[find-1]>max)
        {
            max = infostudent[i].score[find-1];
            indexmax = i;
        }
   }
   printf("%s %d\n",infostudent[indexmax].name,max);
}