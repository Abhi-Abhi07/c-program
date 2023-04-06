#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1[100];
    e1[0].code=101;
    e1[0].salary=100000.25;
    strcpy(e1[0].name,"Ai");
    e1[1].code=01;
    e1[1].salary=100000.25;
    strcpy(e1[1].name,"abhi");
    printf("%d\t",e1[0].code);
    printf("%.2f\t",e1[0].salary);
    printf("%s\t",e1[0].name);
    printf("\n");
    printf("%d\t",e1[1].code);
    printf("%.2f\t",e1[1].salary);
    printf("%s\t",e1[1].name);
    return 0;
}