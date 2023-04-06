#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("pr01.txt","r");
    int num;
    int i=0;
    while(i<3){
    fscanf(ptr,"%d",&num);
    printf("num is : %d\t",num);
    i++;
    }
    fclose(ptr);
    return 0;
}