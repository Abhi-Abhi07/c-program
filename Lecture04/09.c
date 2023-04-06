#include<stdio.h>

int main(){
    int num;
    int fac=1;
    int i=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    while( i<=num){
        fac=i*fac;
        i++;
    }
    printf("Factorial is : %d",fac);
    return 0;
}