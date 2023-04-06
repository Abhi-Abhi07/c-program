#include<stdio.h>

int reversearr(int arr[], int n){
    int s=0;
    int e=9;
    while(s<e){
        int temp;
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;e--;
    }
}
int main(){
    int arr[10]={5,10,15,20,25,30,35,40,45,50};
    reversearr(arr,10);
    for(int i=0; i<10; i++){
       printf("%d ",arr[i]);
    }
    return 0;
}