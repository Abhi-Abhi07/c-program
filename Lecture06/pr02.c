#include<stdio.h>

int fun(int i){
    printf("Add of i : %u\n",&i);
}
int main(){
    int i=10;
    int *ptr;
    ptr=&i;
    printf("Add of i : %u\n",&i);
    fun(i);
    return 0;
}