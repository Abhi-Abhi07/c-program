#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("Abhi.txt","r");
    if(ptr==NULL){
        printf("file does not exit !");
    }
    else{
        int num1,num2,num3;
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("Num1 is : %d\n",num1);
        printf("Num2 is : %d\n",num2);
    }
    return 0;
}