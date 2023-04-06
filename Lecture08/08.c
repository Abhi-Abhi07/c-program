#include<stdio.h>
#include<string.h>
int main(){
    char *st1="Abhi";
    char st2[100]="Ac";
    int val = strcmp(st1,st2);
    printf("Now the val is : %d\n",val);
    return 0;
}