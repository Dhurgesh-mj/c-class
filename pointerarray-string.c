#include<stdio.h>
int main(){
    char str[10];
    int i;
    char *p;
    p=str;
    printf("enter the name :");
    scanf("%s",str);
    for (i=0;i<10;i++)
    {
        printf("the value : %c\n",*p);
        printf("the address :%p\n",p);
        p=p+1;
    }
}