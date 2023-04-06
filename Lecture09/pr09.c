#include<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}dt;
void display(dt d){
    printf("%d/%d/%d\n",d.day,d.month,d.year);
}
int dtcmp(dt d1,dt d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    return 0;
}
int main(){
    dt d1={22,12,2002};
    dt d2={22,12,2002};
    display(d1);
    display(d2);
    
    printf("After compare : %d",dtcmp(d1,d2));
    return 0;
}