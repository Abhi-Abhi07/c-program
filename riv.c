#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    while(1){
        if(kbhit()){
            ch=getch();
            printf("\nCharacter : %c",ch);
            break;
        }
        printf("Ai");
    }
    return 0;
}