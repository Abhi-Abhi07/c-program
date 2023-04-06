#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int *ptr2;
    ptr = (int *) malloc(6 * sizeof(int));
    printf("Enter elements : \n");
    for (int i = 0; i < 600; i++)
    {
        ptr2 = (int *) malloc(600000 * sizeof(int));
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    printf("Elements are : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}