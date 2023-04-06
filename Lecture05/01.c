#include<stdio.h>

int avgofthreenum(int a, int b, int c){
    return (a+b+c)/3;
}

int main(){
    printf("%d",avgofthreenum(3,6,9));
    return 0;
}