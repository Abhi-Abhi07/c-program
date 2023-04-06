#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    switch(marks/10){
        case 5:
        printf("Your grad is D");
        break;
        
        case 6:
        printf("Your grad is D");
        break;

        case 7:
        printf("Your grad is C");
        break;

        case 8:
        printf("Your grad is B");
        break;

        case 9:
        printf("Your grad is A");
        break;

        case 10:
        printf("Your grad is A");
        break;

        default:
        printf("You are pass");
    }
    return 0;
}