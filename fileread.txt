#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("password.c","r");
    if (fp==NULL)
    {
        printf("no file found");
        exit(-1);
    }
    else
    {
        while (1)
        {
            c=fgetc(fp);
            if (c!=EOF)
            {
                printf("%c",c);
            }
            else
            {
            break;
            }
        }
    }
    fclose(fp);

}