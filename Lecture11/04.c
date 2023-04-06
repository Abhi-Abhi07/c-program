#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("How many integer you want to enter : ");
    scanf("%d",&n);
    ptr = (int *) calloc(n, sizeof(int));
    printf("Enter elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Elements are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}