#include<stdio.h>

int main(){
    int num;
    printf("enter number \t");
    scanf("%d",&num);
    int i=1;
    while(i<=10){
        printf("%d * %d = %d\n",num,i,(i*num));
        i++;
    }
    return 0;
}