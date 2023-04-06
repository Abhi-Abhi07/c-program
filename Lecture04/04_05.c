#include<stdio.h>

int main(){
    int num;
    printf("enter number \t");
    scanf("%d",&num);
    for(int i=0; i<=num; i++){
        printf("%d\n",i);
        if(i==5){
            break;
        }
    }
    return 0;
}