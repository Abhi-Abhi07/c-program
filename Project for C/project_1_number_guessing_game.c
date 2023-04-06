#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int lower=1;
    int upper=100;
    srand(time(0));
    int num=(rand()%(upper-lower+1))+lower;
    // printf("%d\n",num);
    int guess;
    printf("Guess the number ");
    scanf("%d",&guess);
    int guesses=1;
    while(guess!=num){
        if(guess>num){
            printf("lower number please ");
            scanf("%d",&guess);
        }
        else{
            printf("Higher number please ");
            scanf("%d",&guess);
        }
        guesses++;
    }
    printf("You will pass %d guesses",guesses);
    return 0;
}