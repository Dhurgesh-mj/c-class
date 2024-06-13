#include<stdio.h>

int main(){
    int a[3][3];
    int r,c;
    printf("enter the values for 3x3 matrics :" );
    for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)

        {
            scanf("%d",&a[r][c]);
        }
        
    }
    // printing 
    for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++) 
        {
            printf(" %d\t",a[r][c]);
        }
        printf("\n");
    }
    
}