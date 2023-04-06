#include<stdio.h>

int main(){
    char *ptr="Abhi bhai";//it is use for reinitialization
    // char ptr[]="Abhi bhai";//it is not use for reinitialization
    ptr="abhi";
    printf("%s",ptr);
    return 0;
}