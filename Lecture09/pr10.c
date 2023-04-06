#include<stdio.h>
typedef struct time{
    int hour;
    int minute;
    int second;
}tim;
void display(tim t){
    printf("%d/%d/%d\n",t.hour,t.minute,t.second);
}
int timecmp(tim t1,tim t2){
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    if(t1.minute>t2.minute){
        return 1;
    }
    if(t1.minute<t2.minute){
        return -1;
    }
    if(t1.second>t2.second){
        return 1;
    }
    if(t1.second<t2.second){
        return -1;
    }
    return 0;
}
int main(){
    tim t1={3,15,25};
    tim t2={3,15,25};
    display(t1);
    printf("After compare : %d",timecmp(t1,t2));
    return 0;
}