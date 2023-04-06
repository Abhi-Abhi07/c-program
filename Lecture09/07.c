#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;
int main(){
    struct employee e1;
    emp e2;
    e1.code=1;
    e1.salary=100000.25;
    strcpy(e1.name,"Ai");
    printf("%d\t",e1.code);
    printf("%.2f\t",e1.salary);
    printf("%s\t",e1.name);

    e2.code=5;
    e2.salary=100000.25;
    strcpy(e2.name,"Abhi");
    printf("\n%d\t",e2.code);
    printf("%.2f\t",e2.salary);
    printf("%s\t",e2.name);
    return 0;
}