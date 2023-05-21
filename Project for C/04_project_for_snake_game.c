#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int width=20,height=20;
int x,y,fruitX,fruitY,gameOver,score;

void setup(){
    x=width/2;
    y=height/2;
    gameOver=0;

    labal1:
    fruitX=rand()%20;
    if(fruitX==0){
        goto labal1;
    }

    labal2:
    fruitY=rand()%20;
    if(fruitY==0){
        goto labal2;
    }

    score=0;
}

void drow(){
    int n=20;
    for(int i=0; i<width; i++){
        for(int j=0; j<height; j++){
            if(i==0 || i==width-1 || j==0 || j==height-1){
                printf("#");
            }
            else{
                if(i==x && j==y){
                    printf("O");
                }
                else if(i==fruitX && j==fruitY){
                    printf("F");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

int main(){
    setup();
    drow();
    return 0;
}