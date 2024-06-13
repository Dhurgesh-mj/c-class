#include<stdio.h>
void swap(int *a,int*p){
    int t;
    t=*a;
    *a=*p;
    *p=t;
}
int main(){
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("a=%d\nb=%d\n",a,b);
}