#include<stdio.h>

int main(){
    int a=10;
    int *p;
    p=&a;
    printf("the value in the pointer is %d \n",*p);
     printf("the address of the value is %p \n",p);
    *p=*p*20;
    printf("the value after updated is: %d \n",a);
    
}
