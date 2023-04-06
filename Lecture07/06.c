#include<stdio.h>
// void printarr(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is : %d\n",i+1,*ptr+i);
//     }
// }
void printarr(int ptr[], int n){
    for(int i=0; i<n; i++){
        // printf("The value of element %d is : %d\n",i+1,*ptr+i);
        printf("The value of element %d is : %d\n",i+1,ptr[i]);
    }
    ptr[2]=5555;
}
int main(){
    int i[]={1,2,3,4,5,6,7};
    printarr(i,7);
    printf("index 2 is : %d\n",i[2]);
    return 0;
}