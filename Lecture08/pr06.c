#include<stdio.h>

void encript(char *st){
    char *ptr = st;
    while(*ptr != '\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main(){
    char st[]="Abhishek is pagal";
    encript(st);
    printf("encripted string is : %s",st);
    return 0;
}