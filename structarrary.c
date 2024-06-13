#include<stdio.h>
struct point
{
    int x,y;
};
int main(){
    struct point p[3];
    int i;
    for (i=0;i<2;i++){
        printf("enter the values of x & y:");
        scanf("%d%d",&p[i].x,&p[i].y);

    }   
    for (i = 0; i < 2; i++)
    {
        printf("\nthe value[%d] :%d,%d ",i,p[i].x,p[i].y);
    }
    p[2].x=p[0].x + p[1].x;
    p[2].y=p[0].y + p[1].y;
    printf("\nthe sum of p{1} and P{2} is  :%d,%d \n",p[2].x,p[2].y);


}
