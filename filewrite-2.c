#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("test-2.txt","w");
    char c[20];
    printf("enter you name :");
    scanf("%s",c);
    for (int i = 0; c[i]!='\0'; i++)
    {
        fputc(c[i],fp);// inserting into file word by word
    }
    fclose(fp);
}