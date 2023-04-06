#include<stdio.h>

int main(){
    int marks[4];
    
    printf("enter the marks 1 student : ");
    scanf("%d",&marks[0]);
    printf("enter the marks 2 student : ");
    scanf("%d",&marks[1]);
    printf("enter the marks 3 student : ");
    scanf("%d",&marks[2]);
    printf("enter the marks 4 student : ");
    scanf("%d",&marks[3]);
    printf("marks 1 student is : %d\n",marks[0]);
    printf("marks 2 student is : %d\n",marks[1]);
    printf("marks 3 student is : %d\n",marks[2]);
    printf("marks 4 student is : %d\n",marks[3]);
    return 0;
}