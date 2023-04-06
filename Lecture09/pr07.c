#include<stdio.h>
#include<string.h>
typedef struct complex{
    int x,y;
}com;
int main(){
    com c1,c2;
    c1.x=3;
    c2.x=45;
    c1.y=34;
    c2.y=7;
    printf("%d + %d i\n",c1.x,c2.x);
    printf("%d + %d i\n",c1.y,c2.y);
    return 0;
}