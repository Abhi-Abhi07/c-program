#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(6 * sizeof(float));
    printf("Enter elements : \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%f",&ptr[i]);
    }
    printf("Elements are : \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%f\n",ptr[i]);
    }
    return 0;
}