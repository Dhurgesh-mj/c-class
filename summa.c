#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    int no;
    int i;

    printf("Enter the number of elements to be stored: ");
    scanf("%d", &no);
    p = (int *)malloc(no * sizeof(int));
    for (i = 0; i < no; i++) {
        printf("Enter the element at index [%d]: ", i);
        scanf("%d", &p[i]);
    }
    for (i = 0; i < no; i++) {
        printf("The value at index [%d]: %d\n", i, p[i]);
    }
    free(p);
}
