#include<stdio.h>
float force(float m){
    return m*9.8;
}
int main(){
    float mass;
    printf("Enter the value of mass in kgs : ");
    scanf("%f",&mass);
    printf("the value of force in newton : %f",force(mass));

    return 0;
}