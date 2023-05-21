#include<stdio.h>
#include<conio.h>
int main(){
    while(1){
        if(kbhit()){
            printf("\n\nAbhi");
            char ch=getch();
            printf("\n\nyou will enter key are : %c",ch);
            break;
        }
        printf("Ai");
    }
    return 0;
}