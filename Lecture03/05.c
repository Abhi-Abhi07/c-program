#include<stdio.h>

int main(){
    char ch;
    printf("Enter the charecter : ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("lowercase");
    }
    else{
        printf("Not lowercase");
    }
    return 0;
}