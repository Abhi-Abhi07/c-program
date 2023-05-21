#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int size;
    int top;
    int *arr;
};

void pop(struct stack* ptr){
    if(ptr->top!=-1){
        ptr->top--;
    }
    else{
        printf("Stack is underflow\n");
    }
}

void peak(struct stack* ptr){
    if(ptr->top!=-1){
        printf("%d\n",ptr->arr[ptr->top]);   
    }
    else{
        printf("Stack is empty\n");
    }
}

int main(){
    
    struct stack *st;

    st->size=5;
    st->top=-1;
    st->arr=( int*)malloc(st->size * sizeof(int));
    
    st->arr[0]=4;
    st->top++;
    st->arr[1]=7;
    st->top++;
    st->arr[2]=6;
    st->top++;

    // pop(st);

    peak(st);
    return 0;
}