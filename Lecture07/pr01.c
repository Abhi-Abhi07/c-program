#include<stdio.h>

int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int *ptr=&arr[0];
    ptr=ptr+2;
    printf("%d",*ptr);
    return 0;
}