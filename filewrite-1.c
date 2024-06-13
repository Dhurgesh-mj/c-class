#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char c[20];
    fp=fopen("test.txt","w");
    printf("enter your name:");
    scanf("%[^\n]",c);
    fputs(c,fp);//inserting into the file as a string ;
    fclose(fp); 
}