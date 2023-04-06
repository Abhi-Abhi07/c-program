#include<stdio.h>

int main(){
    int num;
    printf("enter number \t");
    scanf("%d",&num);
    for(int i=num; i; i--){
        printf("%d\n",i);
    }
    return 0;
}