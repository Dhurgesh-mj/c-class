#include<stdio.h>
int main()
{
    FILE *fp;
    char n[]={"dhurgesh"};
    int b=3;
    int exp=1234;
    fp=fopen("test.csv","w");
    fprintf(fp,"name,no,exp\n");
    fprintf(fp,"%s,%d,%d",n,b,exp);
    fclose(fp);
}