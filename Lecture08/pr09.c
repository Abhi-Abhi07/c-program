#include<stdio.h>
int ispresent(char *st, char ch){
    int i=0;
    while(st[i]!='\0'){
        if(ch==st[i]){
            return 1;
            break;
        }
        i++;
    }
    return 0;
}
int main(){
    char st[]="AbhishekAbhishek";
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    if(ispresent(st,ch)==1){
        printf("present");
    }
    else{
        printf("Not present");
    }
    
    return 0;
}