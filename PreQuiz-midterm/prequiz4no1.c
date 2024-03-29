#include <stdio.h>

int check(int [],int [],int);
int main()
{
    int num,i;
    scanf("%d",&num);
    int arry1[num];
    int arry2[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arry1[i]);
    }
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arry2[i]);
    }
    int number = check(arry1,arry2,num);
    printf("%d\n",number);
    return 0;
}
int check(int A[],int B[],int length)
{
    int i,count=0;
    for(i=0;i<length;i++)
    {
        if(A[i]>B[i])
        {
            count++;
        }
    }
    return count;
}