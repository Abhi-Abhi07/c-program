#include<stdio.h>
#include<string.h>
struct account{
    double accountnumber;
    float balance;
    char name[20];
};
int main(){
    struct account coustomer;
    coustomer.accountnumber=0101666667713407;
    coustomer.balance=10000000.25;
    strcpy(coustomer.name,"Ai");
    printf("Account number is : %.lf\n",coustomer.accountnumber);
    printf("Net balance is : %.2f\n",coustomer.balance);
    printf("Account holder name is %s\t",coustomer.name);
    return 0;
}