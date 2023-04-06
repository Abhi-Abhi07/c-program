#include<stdio.h>

int main(){
    // int n,i=2,count=0;
    // printf("Enter any number : ");
    // scanf("%d",&n);
    // while(i<n){
    //     if(n%i==0){
    //         count++;
    //     }
    //     i++;
    // }
    // if(count==0){
    //     printf("prime number");
    // }
    // else{
    //     printf("not prime number");
    // }

    int n,i=1,count=0;
    printf("Enter any number : ");
    scanf("%d",&n);

    do{
        if(n%i==0){
            count++;
        }
        i++;
    }while(i<=n);
    if(count==2){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }

    return 0;
}