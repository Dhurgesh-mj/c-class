#include<stdio.h>
// function type 3
// no input but return value 
int add(){
    int a,b;
    printf("enter the two values :");
    scanf("%d%d",&a,&b);
    return a+b;
}
int main(){
    int c=add();
    printf("%d \n",c);
}