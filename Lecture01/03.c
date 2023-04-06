#include<stdio.h>

int main(){
    float cel;
    printf("Enter the celsius degree : ");
    scanf("%f",&cel);
    float farenhiet=(cel*9/5)+32;
    printf("farenhiet is : %f",farenhiet);
    return 0;
}