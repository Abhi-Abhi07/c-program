#include<stdio.h>

int main(){
    int arr[10][5];
    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            printf("Enter the student%d marks for sub%d\t",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            printf("student%d marks for sub%d\t%d\n",i+1,j+1,arr[i][j]);
        }
    }
    return 0;
}