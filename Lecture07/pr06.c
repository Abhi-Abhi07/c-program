#include<stdio.h>
int positive(int arr[], int n){
    int count=0;
    for(int i=0; i<10; i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[10]={5,10,-15,20,25,-30,35,-40,45,50};
    int j=positive(arr,10);
    printf("%d",j);
    return 0;
}