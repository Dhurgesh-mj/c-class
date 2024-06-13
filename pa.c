#include<stdio.h>

int main(){
    int rows;
    int i;
    int j;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;++j){
            printf("%d",j);
        }
        printf("\n");
    } 
}
