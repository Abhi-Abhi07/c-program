#include<stdio.h>

int sumAndavg(int a, int b, int *sum, float *avg){
    *sum=a+b;
    *avg=(float)(a+b)/2;
}
int main(){
    int i=10;
    int j=15;
    int sum;
    float avg;
    sumAndavg(i,j,&sum,&avg);
    printf("sum : %d",sum);
    printf("avg : %f",avg);

    return 0;
}