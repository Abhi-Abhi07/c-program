#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int *ptr2;
    ptr=(int*)malloc(5 * sizeof(int));
    for(int i=2; i<100; i++){
        ptr2=(int*)malloc(100000 * sizeof(int));
        printf("Enter the value : ");
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    return 0;
}