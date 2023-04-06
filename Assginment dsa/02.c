#include<stdio.h>
int kerinsert(int arr[], int n, int key, int element){
    if(element>=n){
        return element;
    }
    arr[element]=key;
    return (element+1);
}
int main(){
    int arr[20]={1,3,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("n : %d\n",n);
    int element=5;
    int key=5;
    printf("before \n");
    for(int i=0; i<element; i++){
        printf("%d\t",arr[i]);
    }
    printf("after\n");
    element=kerinsert(arr,n,key,element);
    for(int i=0; i<element; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}





// #include<stdio.h>
//     int keydel(int arr[], int n, int key ){
//         int find=findelement(arr,n,key);
//         printf("\n%d\n",find);
//         if(find==-1){
//             printf("key not found !");
//             return n;
//             }
//             int i; 
//             for (i = find; i < n - 1; i++) 
//             arr[i] = arr[i + 1]; 
//             return n - 1; 
//         }
//     int findelement(int arr[], int n, int key){
//         int i;
//         for(i=0; i<n; i++)
//             if(arr[i]==key)
//             return i;
//             return -1;
//     }
// int main(){
//     int arr[]={31, 27, 3, 54, 67, 31};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int key=54;
//     printf("Before\t"); 
//     for (int i = 0; i < n; i++) 
//         printf("%d\t", arr[i]);
//         printf("\nafter\t");

//         n=keydel(arr,n,key);
//         for(int i=0; i<n; i++){
//         printf("%d\t",arr[i]);
//         }
//     return 0;
// }