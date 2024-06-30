#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int no,i;
    printf("enter the no of elemnts:");
    scanf("%d",&no);
    printf("enter the values:");
    p=(int *)calloc(no,sizeof(int));
    for (i = 0; i < no; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("the values in the array :");
    for(i=0;i<no;i++)
    {
        printf("[%d]\t",*(p+i)); //or (*p with p++) or *(p+i)
    }
}