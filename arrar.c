#include<stdio.h>

int main(){
    int a[50];
    int i;
    int l;
    printf("enter the maximum value to store:");
    scanf("%d",&l);
    for ( i = 0; i < l; i++)
    
        scanf("%d",&a[i]);
    // printing 
    for ( i = 0; i < l; i++)
    {
        printf("the values are :%d\n",a[i]);
    }
    
}