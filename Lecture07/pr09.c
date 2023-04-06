#include<stdio.h>

int main(){
    int arr[2][2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                printf("");
                scanf("%d",&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}