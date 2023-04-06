#include<stdio.h>

int main(){
    int num;
    printf("enter number \t");
    scanf("%d",&num);
    int i=1;
    int sum=0;
    while(i<=10){
        printf("%d * %d = %d\n",num,i,(i*num));
        sum=(i*num)+sum;
        i++;
    }
    printf("%d",sum);
    return 0;
}