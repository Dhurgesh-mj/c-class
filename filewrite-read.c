#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("test-4.txt","w+");
    char c[20];
    char ch;
    int choice;
    while (1)
    {
        printf("enter the choics :");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("enter the name:");
            scanf("%s",c);
            fputs(c,fp); 
            fputc('\n',fp);
        }
        else
        {
            break;
        }
    }
       
    fseek(fp,0,SEEK_SET);
    printf("the contents in the file:\n");
    while (1)
    {
        ch=fgetc(fp);
        if (ch!=EOF)
        {
          printf("%c",ch);

        }
        else 
            break;
    }
    
}