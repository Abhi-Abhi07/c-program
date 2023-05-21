#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a=rand();
    srand(time(0));//every time random number ko change kar deta he
    
    int b=rand()%10;//random value 0 to 9
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0; i<5; i++){
        printf("%d ",rand());
    }
    return 0;
}