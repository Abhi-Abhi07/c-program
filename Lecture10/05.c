#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr=fopen("get.txt","r");
    // // char c=fgetc(ptr);
    // char c;
    // printf("The character is : %c\n",fgetc(ptr));
    // printf("The character is : %c\n",fgetc(ptr));
    // printf("The character is : %c\n",fgetc(ptr));
    // printf("The character is : %c\n",fgetc(ptr));
    // printf("The character is : %c\n",fgetc(ptr));

    ptr=fopen("demoput.txt","w");
    int i=0;
    while(i<4){
    putc('c' , ptr);
    // fclose(ptr);
    i++;
    }
    return 0;

}