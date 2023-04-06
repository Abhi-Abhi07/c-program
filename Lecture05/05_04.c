#include<stdio.h>
int fac(int x){
    int factorial;
    if(x==0 || x==1){
        return 1;
    }
    else{
        factorial=x*fac(x-1);
        return factorial;
    }
}
int main(){
    printf("%d",fac(7));
    return 0;
}