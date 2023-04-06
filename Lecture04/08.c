#include<stdio.h>

int main(){
    int num;
    int fac=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        fac=i*fac;
    }
    printf("Factorial is : %d",fac);
    return 0;
}