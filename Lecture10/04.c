#include<stdio.h>

int main(){
    FILE *ptr;
    char ch[50]="Abhi";
    ptr=fopen("sample.txt","w");
    fprintf(ptr, "text is : %s",ch);
    fclose(ptr);
    return 0;
}