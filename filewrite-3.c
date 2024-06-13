#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("test-3.txt","w");
    char c[20];
    int choice;
    while (1)
    {
        printf("enter 1 to continue 0 to exit:");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("enter the word :");
            scanf("%s",c);
            fputs(c,fp);
            fputc('\n',fp);
        }
        else
         {
            break;
         }   
    }
    
}