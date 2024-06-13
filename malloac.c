#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int no,i;
    printf("enter the no of elements:");
    scanf("%d",&no);
    p=(int *) malloc(no*sizeof(int));
    for (i = 0; i <no; i++)
    {
        printf("enter teh value in the index of [%d]",i);
        scanf("%d",&p[i]);
    }
    printf("the values are :");
    for ( i = 0; i < no; i++,p++)
    {
        printf("[%d]\t",*p);//or p[i]
    }
}