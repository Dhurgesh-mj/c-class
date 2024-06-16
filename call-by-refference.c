#include<stdio.h>

void add(int *p,int *b,int *c){ // function declaration
    *c=*p+*b;// adding the tow values and pu
}
int main(){
    int a,b,c;
    printf("enter the values to add:");
    scanf("%d%d",&a,&b);
    add(&a,&b,&c);//passing the address of the variable to the pointer
    printf("%d\n",c);//print the value c after updating 
}  