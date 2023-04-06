#include<stdio.h>

int main(){
    // int i=1;
    // int ans=0;
    // do{
    //     ans=i+ans;
    //     i++;
    // }while(i<=10);
    // printf("%d",ans);

    
    int ans=0;
    for(int i=1;i<=10;i++){
        ans=i+ans;
    }
    printf("%d",ans);
    return 0;
}