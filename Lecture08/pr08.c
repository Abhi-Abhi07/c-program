#include<stdio.h>

int main(){
    char st[]="AbhishekAbhishek";
    char ch='h';
    int i=0;
    int count=0;
    while(st[i]!='\0'){
        if(ch==st[i]){
            count++;
        }
        i++;
    }
    printf("Occrance is : %d",count);
    return 0;
}