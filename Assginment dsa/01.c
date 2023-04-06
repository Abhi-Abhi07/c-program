#include<stdio.h>

float median(int arr[], int n){
    int s=0;
    int e=n-1;
    
    while(s<e){
        s++;
        e--;
    }
   float ans=(arr[s]+arr[e]);
   float mid=ans/2;
    return mid;
}

int main(){
    int arr[10]={4,5,6,7,8,9,7,8,9,10};
    float ans=median(arr,10);
    printf("%f\n",ans);
    return 0;
}





// #include<stdio.h>

// float mean(int arr[], int n){
//     float sum=0;

//     for(int i=0; i<n; i++){
//         sum=arr[i]+sum;
//         printf("%d\n",sum);
//     }
    
//     return sum/n;
// }

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     float ans=mean(arr,10);
//     printf("%f",ans);
//     return 0;
// }