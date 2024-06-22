#include<stdio.h>

int main(){
    char a[5]="hello";
    char *p=a;
    printf("address of a %p\n",&a);
    printf("address give to pinter p is  : %p\n",p);
    printf("%s\n",p);
}