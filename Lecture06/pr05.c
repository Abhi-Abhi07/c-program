#include<stdio.h>

int main(){
    int i=8;
    int *j=&i;
    int **k=&j;
    printf("value of i : %d\n",i);
    printf("value of i : %d\n",*(&i));
    printf("value of i :  %d\n",*(j));
    printf("value of i :  %d\n",*(*(k)));
    printf("value of i :  %d\n",**k);
    return 0;
}