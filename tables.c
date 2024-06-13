#include<stdio.h>

int main(){
    int a[11];
    int i,l;
    printf("enter the table to print :");
    scanf("%d",&l);
    for (i=1; i <= 10; i++)
    {
        a[i]=i*l;
    }
    for (i = 1; i <= 10; i++)
    {
        printf("table [%d] X [%d]>>>>>%d \n",l,i,a[i]);
    }
    





}

