#include<stdio.h>
#include<stdlib.h>

int strlenth(char *c){
    int count=0;
    while (1){
        if (*(c+count)!=0) //or line 11 or (c[count])
        {
            count++;
            //c=c+count;
        }else{
            break;
        }
    }
    return count;
}

int main(){
    char s[11]="hello world";
    printf("the length is :%d\n",strlenth(s));
}