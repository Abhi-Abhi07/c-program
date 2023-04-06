#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e1){
    
    printf("%d\t",e1.code);
    printf("%.2f\t",e1.salary);
    printf("%s\t",e1.name);
    e1.code=108;
}
int main(){
    struct employee e1;
    e1.code=101;
    e1.salary=100000.25;
    strcpy(e1.name,"Ai");
    show(e1);
    printf("%d\t",e1.code);
    return 0;
}