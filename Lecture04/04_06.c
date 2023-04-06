#include<stdio.h>

int main(){
    int num;
    int skip=3;
    printf("enter number \t");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        
        if(i==skip){
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}