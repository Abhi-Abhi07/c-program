#include<stdio.h>

int strcpy(char *st, char *st2){
    char *i=st;
    int m=0;
    int n=0;
    while(*i!='\0'){
        st2[m]=st[m];
        m++;
        i++;
    }
    st2[m]='\0';
}
int main(){
    char st[]="abhi";
    char st2[10];
    strcpy(st,st2);
    printf("st2 is : %s",st2);
    return 0;
}