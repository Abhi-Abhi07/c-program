#include<stdio.h>

int main(){
    int principalamount=10000;
    int year=2;
    int interstrate=10;
    int simpleinterest=(principalamount*year*interstrate)/100;
    printf("Simple interest is : %d",simpleinterest);

    return 0;
}