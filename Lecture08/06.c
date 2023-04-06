#include<stdio.h>
#include<string.h>
int main(){
    char *st1="Abhi";
    char st2[100];
    strcpy(st2,st1);
    printf("Now is st2 is : %s\n",st2);
    return 0;
}