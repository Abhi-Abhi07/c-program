#include<stdio.h>
void pattern(int n){
    
    for(int i=1; i<=(2*n-1); i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
        i++;
    }
}
int main(){
    pattern(5);
    return 0;
}