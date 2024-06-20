#include<stdio.h>
#include<stdlib.h>

void arra_input(int b,int arr[][b]){
    printf("enter the values");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    
} 
void arra_print(int b,int arr[][b]){
    printf("printing the values\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    
}
int main(){
    int arra[3][3];
    arra_input(3,arra);
    arra_print(3,arra);
    printf("total size :%ld\n",sizeof(arra)/sizeof(int));
    printf("total bytes of thr array :%ld\n",sizeof(arra));
}