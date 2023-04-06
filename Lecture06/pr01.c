#include<stdio.h>

int main(){
    int i=10;
    int *ptr;
    ptr=&i;
    printf("Add of i : %u\n",&i);
    printf("value of i : %d\n",*ptr);
    return 0;
}