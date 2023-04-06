#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int div=num%97;
    printf("Divisible test return : %d\n",div);
    return 0;
}