#include<stdio.h>

int main(){
    int arr[3][10]={{2,4,6,8,10,12,14,16,18,20},{7,14,21,28,35,42,49,54,63,70},{9,18,27,36,45,54,63,72,81,90}};
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}