#include<stdio.h>

int main(){
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    for(int i=0; i<5; i++){
    printf("enter the marks %d student : ",i+1);
    scanf("%d",ptr);
    ptr++;
    }
    for(int i=0; i<5; i++){
    printf("marks %d student is : %d\n",i+1,marks[i]);
    }
    return 0;
}