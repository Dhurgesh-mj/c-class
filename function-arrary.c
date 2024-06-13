#include<stdio.h>
void update(int *p,int b){ // pass the size to function 
    for (int i = 0; i < b; i++)
    {
        p[i]=p[i]*10;
    }
}
void display(int *p1,int b){ // pass the size to function 
    for ( int i = 0; i < b; i++,p1++)//new method for moving the pointer location 
    {
        printf("the stored value at the index is [%d]:[%d]\n",i,*p1);
        printf("\nthe address of the stored value is {%p}\n",p1);
        //p1=p1+1; basic methods
    }
    
    
}
int main(){
    int a[10];
    int b;
    printf("enter the max number to store :\n");
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        printf("enter the number to store at the index[%d]:\n",i);
        scanf("%d",&a[i]);
    }
    update(a,b);
    display(a,b);
}