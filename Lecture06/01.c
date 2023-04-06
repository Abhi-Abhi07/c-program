#include<stdio.h>

int main(){
    int i=8;
    int *j=&i;
    printf("value of i : %d\n",i);
    printf("i add : %u\n",&i);
    printf("i add : %u\n",j);
    printf("value of j : %d",j);
    printf("value of i : %d",*(&i));

    return 0;
}