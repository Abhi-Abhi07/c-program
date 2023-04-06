#include<stdio.h>

char arr[9]={'1','2','3','4','5','6','7','8','9'};

void gameName(){
    printf("\n\t\t   -: Tic Tac Toe Game :-");
}

void show(){
    printf("\n\n\n\t\t\t|---|---|---|");
    printf("\n\t\t\t| %c | %c | %c |",arr[0],arr[1],arr[2]);
    printf("\n\t\t\t|---|---|---|");
    printf("\n\t\t\t| %c | %c | %c |",arr[3],arr[4],arr[5]);
    printf("\n\t\t\t|---|---|---|");
    printf("\n\t\t\t| %c | %c | %c |",arr[6],arr[7],arr[8]);
    printf("\n\t\t\t|---|---|---|\n\n");
}

void inputSymbol(){
    printf("\n\t\tPlayer 1. Symbol :x:");
    printf("\n\t\tPlayer 2. Symbol :o:");
}

void start(){
    // char pl;
    // printf("\n\nEnter how will start the game : For Player1 Press 1 or player2 Press 2 : ");
    // scanf("%c",&pl);
    printf("\n\n\t\t\tLet's play Tic Tac Toe");
}

void check(char p, char s){
    for(int i=0; i<9; i++){
        if(arr[i]==p){
            arr[i]=s;
        }
    }
}

int count = 0;

void play(){
    char p,s;
    printf("\nEnter postion and Symbol : \n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    count++;
    check(p,s);
}

int end(){
    if((arr[0]=='x' && arr[1]=='x' && arr[2]=='x')||
        (arr[3]=='x' && arr[4]=='x' && arr[5]=='x')||
        (arr[6]=='x' && arr[7]=='x' && arr[8]=='x')||
        (arr[0]=='x' && arr[3]=='x' && arr[6]=='x')||
        (arr[1]=='x' && arr[4]=='x' && arr[7]=='x')||
        (arr[2]=='x' && arr[5]=='x' && arr[8]=='x')||
        (arr[0]=='x' && arr[4]=='x' && arr[8]=='x')||
        (arr[2]=='x' && arr[4]=='x' && arr[6]=='x')){
        return 100;
    }
    else if((arr[0]=='o' && arr[1]=='o' && arr[2]=='o')||
        (arr[3]=='o' && arr[4]=='o' && arr[5]=='o')||
        (arr[6]=='o' && arr[7]=='o' && arr[8]=='o')||
        (arr[0]=='o' && arr[3]=='o' && arr[6]=='o')||
        (arr[1]=='o' && arr[4]=='o' && arr[7]=='o')||
        (arr[2]=='o' && arr[5]=='o' && arr[8]=='o')||
        (arr[0]=='o' && arr[4]=='o' && arr[8]=='o')||
        (arr[2]=='o' && arr[4]=='o' && arr[6]=='o')){
        return 200;
    }
    return 300;
}

void empty(){
    arr[0]='1';
    arr[1]='2';
    arr[2]='3';
    arr[3]='4';
    arr[4]='5';
    arr[5]='6';
    arr[6]='7';
    arr[7]='8';
    arr[8]='9';
}

int main(){
    int e=0;
    char ch;

    label2:
    gameName();
    show();
    inputSymbol();
    start();
    play();

    label:
    show();
    play();
    e=end();
    if(count<9){
        if(e==100){
            show();
            printf("Player 1 won !");
            count = 0;
        }
        else if(e==200){
            show();
            printf("Player 2 won !");
            count = 0;
        }
        else{
            goto label;
        }
    }
    else{
        printf("\n\n\t\t\tGame Draw");
        count = 0;
    }

    printf("\nDo you want to continue : y for Yes or n for exit : ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y' || ch=='Y'){
        empty();
        goto label2;
    }

    printf("Ok");
    
    return 0;
}