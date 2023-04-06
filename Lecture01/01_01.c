#include<stdio.h>

int main(){
    // int width=7;
    // int length =4;
    // int area=width*length ;
    // printf("The area of rectangle is %d",area);

    int width,length;
    
    printf("Enter the width of rectangle ");
    scanf("%d",& width);
    printf("Enter the length of rectangle ");
    scanf("%d",&length);
    int area=width*length;
    printf("The area of rectangle is %d",area);
    return 0;
}