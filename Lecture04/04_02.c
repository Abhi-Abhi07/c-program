#include<stdio.h>

int main(){
    int num;
    printf("enter number \t");
    scanf("%d",&num);
    int i=0;
    do{
        printf("%d\n",++i);
    }while(i<num);
    return 0;
}