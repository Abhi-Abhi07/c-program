#include<stdio.h>

int main(){
    FILE *ptr;
    ptr =fopen("Abhi.txt","r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("num is : %d\n",num);
    return 0;
}