#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("fileread.c","r");
    fp2=fopen("fileread.txt","w");
    if (fp1==NULL)
    {
        printf("file does't found\n");
    }
    else
        while (1)
        {
            c=fgetc(fp1);
            if (c!=EOF)
            {
                fputc(c,fp2);
            }
            else
                break;
        }
        printf("file copped ......\n");
}