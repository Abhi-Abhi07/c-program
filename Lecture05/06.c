#include<stdio.h>
int sumofnaturalnum(int x){
    if(x==0){
        return 0;
    }
    else{
    int sum=x+(sumofnaturalnum(x-1));
    return sum;
    }
}
int main(){
    
    printf("%d",sumofnaturalnum(10));
    return 0;
}