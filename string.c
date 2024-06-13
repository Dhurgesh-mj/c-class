#include<stdio.h>

int main(){
    char c[10];
    int i;
    printf("enter 5 letters:");
    for (i = 0; i < 10; i++)
    {
        scanf("%c",&c[i]);
    }
    c[i]='\0';
    printf("the output : %s\n",c);
}