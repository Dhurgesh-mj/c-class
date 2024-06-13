#include<stdio.h>
//method 1

int main(){
    int a=10;
    int b=20;
    int t;
    t=a;
    a=b;
    b=t;
    printf("a=%d \nb=%d",a,b);
}
//method 2
int main(){
    int a=10;
    int b=20;
    int sum;
    sum=a+b;
    a=sum-a;
    b=sum-b;
    printf("%d%d",a,b);
 
}
//method 3:
int main(){
    int a=10;
    int b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d%d",a,b);
}