#include<stdio.h>

int main(){
    int i=1;
    int ans=0;
    while(i<=10){
        ans=i+ans;
        i++;
    }
    printf("%d",ans);
    return 0;
}