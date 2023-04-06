#include<stdio.h>

void d(char *st){
    char *ptr = st ;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main(){
    char st[]="Bcijtifl!jt!qbhbm";
    d(st);
    printf("decripted string is : %s",st);
    return 0;
}