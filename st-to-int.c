#include<stdio.h>
#include<stdlib.h>

int main(){
    char b[10];
    int x,a,c;
    printf("enter the 5 numbers :");
    for (a = 0; a < 5; a++)
    {
        scanf("%c",&b[a]);
    }
    x=atoi(b);
    printf("ether the number you want to mulity with it:");
    scanf("%d",&c);
    x=x*c;
    printf("the string into int %d ",x);
}