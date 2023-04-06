#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("pr04.txt","w");
    int salary;
    printf("Enter salary : ");
    scanf("%d",&salary);
    fprintf(ptr, "Abhi , %d\n",salary);
    printf("Enter salary : ");
    scanf("%d",&salary);
    fprintf(ptr, "Ai , %d",salary);
    return 0;
}