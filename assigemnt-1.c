#include<stdio.h>

int main(){
    int a[5]={2,3,4,5,6};
    int b[6]={2,3,4,5,6,7};
    int i;
    int j,k;
    for (i = 0; i < 5; i++)
    {
        j=j+a[i];
        
    }
    printf("the total of a is >>>>> %d\n",j);
    for (i = 0; i < 6; i++)
    {
        k=k+b[i];
        
    }
    printf("the total of b is >>>>> %d\n",k);

    printf("the missing number is >>>>%d \n",k-j);
}