#include<stdio.h>

int main(){
    int a,i,j;
    printf("enter the no of rows");
    scanf("%d",&a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    


}