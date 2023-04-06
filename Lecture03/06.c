#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter the number ");
    scanf("%d",&b);
    printf("Enter the number ");
    scanf("%d",&c);
    printf("Enter the number ");
    scanf("%d",&d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("A is greater !");
            }
            else{
                printf("D is greater !");
            }
        }
    }
    else if(b>c){
        if(b>d){
                printf("B is greater !");
            }
            else{
                printf("D is greater !");
            }
    }
    else if(c>d){
                printf("C is greater !");
            }
            else{
                printf("D is greater !");
            }
    return 0;
}