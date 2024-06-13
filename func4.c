#include<stdio.h>
// function type 4
// with input with return value

int addintion(int a ,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b,c;
    printf("enter the number to add :");
    scanf("%d%d",&a,&b);
    c=addintion(a,b);
    printf("%d",c);
}