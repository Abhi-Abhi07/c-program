#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr=fopen("pr02.txt","w");
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1; i<11; i++){
        fprintf(ptr, "%d * %d = %d\n",num,i,num*i);
    }
    fclose(ptr);
    printf("Successfully generated for table %d",num);
    return 0;
}