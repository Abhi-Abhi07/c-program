#include<stdio.h>

int fun(int *x){
    *x=*x*10;
}
int main(){
    int i=10;
    printf("value of i : %d\n",i);
    fun(&i);
    printf("value of i : %d\n",i);
    return 0;
}