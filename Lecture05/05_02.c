#include<stdio.h>

void goodmorning();
void goodafternoon();
void goodevening();
int main(){
    int i=10;
    goodmorning();
    goodevening();
    return 0;
}
void goodmorning(){
    printf("Good morning Abhi\n");
    goodafternoon();
}
void goodafternoon(){
    printf("Good afternoon Abhi\n");
}
void goodevening(){
    printf("Good evening Abhi\n");
}