#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("pr05.txt","r");
    int num;
    fscanf(ptr, "%d",&num);
    printf("number is : %d",num);
    ptr=fopen("pr05.txt","w");
    fprintf(ptr,"%d",num*2);
    return 0;
}