// //linear search
// #include<stdio.h>

// int ispresent(int arr[], int n, int target){
//     int s=0;
//     while(s<n){
//         if(arr[s]==arr[target]){
//             return 1;
//         }
//         s++;
//     }
//     return 0;
// }

// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int a=3;
//     printf("%d",ispresent(arr,8,a));
//     return 0;
// }




//binary search
#include<stdio.h>

int ispresent(int arr[], int n, int target){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<arr[target]){
            s=mid+1;
        }
        else if(arr[mid]>arr[target]){
            e=mid-1;
        }
        else {
            return 1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int a=5;
    printf("%d",ispresent(arr,8,a));
    return 0;
}