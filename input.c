#include<stdio.h>
int main(){
    char str[20];
    int i;
    printf("enter the name :");
    scanf("%[^\n]",str);
    printf("%s\n",str);
    for ( i = 0; str[i]!=0; i++)
    {
        printf("%c\n", str[i]);

    }
    
}