#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int no,i;
    printf("enter the size of the array :");
    scanf("%d",&no);
    p=(int *)calloc(no,sizeof(int));//giving size to the pointer
    for ( i = 0; i < no; i++)
    {
        printf("enter the number in the index [%d]:",i);
        scanf("%d",&p[i]);
    }
    for ( i = 0; i < no; i++)
    {
        printf("the array before realloac: [%d]\n",p[i]);//printing the value before the realloc
        
    }
    p=(int *)realloc(p,5*sizeof(int));
    for ( i = 0; i < 5; i++)
    {
        printf("the array after realloac: [%d]\n",p[i]);//printing the value after the realloc//
        
    }

}