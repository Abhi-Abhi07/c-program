#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1,e2,e3;

    printf("Enter employee code : ");
    scanf("%d",&e1.code);
    printf("Enter employee salary : ");
    scanf("%.2f",&e1.salary);
    fflush(stdin);
    printf("Enter employee name : ");
    scanf("%s",e1.name);

    printf("\nEnter employee code : ");
    scanf("%d",&e2.code);
    printf("Enter employee salary : ");
    scanf("%.2f",&e2.salary);
    fflush(stdin);
    printf("Enter employee name : ");
    scanf("%s",e2.name);

    printf("\nEnter employee code : ");
    scanf("%d",&e3.code);
    printf("Enter employee salary : ");
    scanf("%.2f",&e3.salary);
    fflush(stdin);
    printf("Enter employee name : ");
    scanf("%s",e3.name);
    
    return 0;
}