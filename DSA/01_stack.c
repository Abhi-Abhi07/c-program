#include<stdio.h>

int stack[5];
int top=-1;

void push(int element){
    top++;
    stack[top]=element;
}

void pop(){
    top--;
}

void peak(){
    if(top>=0){
        printf("%d",stack[top]);
    }
    else{
        printf("stack is empty");
    }
}    

int main(){
    
    push(4);
    push(5);
    push(45);
    pop();
    peak();
    return 0;
}