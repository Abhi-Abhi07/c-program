#include<stdio.h>
float celtofar(float c){
    return ((c*9/5)+32);
}
int main(){
    float cel;
    printf("Enter celsius : ");
    scanf("%f",&cel);
    float a=celtofar(cel);
    printf("%f",a);
    return 0;
}