#include<stdio.h>
int main(){
    int a[4];
    int i;
    int *p;
    p=a;
    for (i = 0; i < 4; i++)
    {
        printf("enter the number of index [%d]\n",i);
        scanf("%d",&p[i]);

    }
    for ( i = 0; i < 4; i++)
    {
        p[i]=p[i]*10;//using pointer to update the value 
        //or *p=*p*10 , p=p+1
    }
    for ( i = 0; i < 4; i++)//printing the value using pointer 
    {
        printf("the updeted value : %d\n",*p);
        printf("the address :%p\n",p);
        p=p+1;
    }
    
}