#include<stdio.h>

int main(){
    int income;
    printf("Enter your income : ");
    scanf("%d",&income);
    float tax;
    if(income<=250000){
        printf("No tax required !");
    }
    else if(income>250000 && income<=500000){
        tax=(income-250000)*0.05;
        printf("You will paid %f",tax);
    }
    else if(income>500000 && income<=1000000){
        tax=(income-500000)*0.20;
        printf("You will paid %f",tax);
    }
    else if(income>1000000){
        tax=(income-1000000)*0.30;
        printf("You will paid %f",tax);
    }
    return 0;
}