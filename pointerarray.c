#include<stdio.h>

int main(){
    int a[4];
    int *p;
    int i;
    p=a;
    for ( i = 0; i < 4; i++)
    {
        printf("enter the number for the index[%d]: \n",i);
        scanf("%d",&p[i]);
    }
    for (i=0;i<4;i++)
    {
        *p=*p*10;
        printf("the value : %d \n",*p);
        printf("the address stored : %p \n",p);
        p=p+1;// making the pointer to move to next byte
    }
    


}

