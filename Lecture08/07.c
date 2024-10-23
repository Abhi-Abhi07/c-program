#include<stdio.h>
#include<string.h>
int main(){
    char *st1="Abhi";
    char st2[100]="bhai     ";
    printf("before st2 is : %s\n",st2);
    strcat(st2,st1);
    printf("Now is st2 is : %s\n",st2);
    printf("Now is st1 is : %s\n",st1);
    st1=st2;
    printf("Now is st1 is : %s\n",st1);
    return 0;
}