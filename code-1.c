#include<stdio.h>
int main(){
    int a;
    float b;
    char x ;
    char l[20];
    printf("enter char :");
    scanf("%c %d %s %f",&x,&a,l,&b);
    printf("\n given value = A = %s  B = %c  c = %d  d = %f",l,x,a,b);
}