#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    e1.code=101;
    e1.salary=100000.25;
    strcpy(e1.name,"Ai");
    printf("%d\t",e1.code);
    printf("%.2f\t",e1.salary);
    printf("%s\t",e1.name);
    return 0;
}