#include<stdio.h>
// func type 2 
// with input and no return value
void summ(int a){
    printf("the value %d",a*10);
}
int main(){
    int l;
    printf("enter the element to mulit with 10");
    scanf("%d",&l);
    summ(l);
}