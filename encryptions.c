#include<stdio.h>
#include<stdlib.h>

void encrypt(){
    int a;
    printf("\nenther the number to encrypt:");
    scanf("%d",&a);
    printf("\nthe encrypt number :%d",a<<12);

}
void decrypt(int c){
    printf("\nthe encrypt number :%d",c>>12);
}

int main(){
    int b,c;
    while (1){
        printf("\n1. to encrypt \n2. to decrypt \n3. exit ");
        printf("\nenther your choice:");
        scanf("%d",&c);
        switch (c)
        {
            case 1:
                encrypt();
                break;
        
            case 2:

                printf("\nenther the number to decrypt:");
                scanf("%d",&b);
                decrypt(b);
                break;

        
            case 3:
                printf("\tthank-you       :)  \n");
                exit(-1);
                
        }
    }   

    
}