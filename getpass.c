#include<stdio.h>
#include<unistd.h>
#include<string.h>
void display(char *pass){
    int l=strlen(pass);
    int i;
    for ( i = 0; i < l; i++)
    {
        printf("%c\n",pass[i]);
        //pass=pass+1;
    }

}

int main(){
    char *pass=getpass("enter the passowrd");
    int l=strlen(pass);
    int i;
    display(pass);
    
}