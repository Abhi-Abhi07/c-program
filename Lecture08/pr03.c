#include<stdio.h>

int strlen(char *st){
    char *ptr =st;
    int count=0;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    return count;
}
int main(){
    char st[]="abhi";
    int l=strlen(st);
    printf("strint len is : %d",l);
    return 0;
}