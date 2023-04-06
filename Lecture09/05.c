#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    (*ptr).code=101;
    ptr->salary=100000.25;
    strcpy((*ptr).name,"Abh");
    printf("%d\t",e1.code);
    printf("%.2f\t",(*ptr).salary);
    printf("%s\t",ptr->name);
    return 0;
}