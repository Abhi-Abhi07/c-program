#include<stdio.h>

int main(){
    int i=2;
    int *ptr=&i;
    int j=3;
    int *pt=&j;
    printf("The address of i is : %u\n",ptr);
    
    printf("The address of j is : %u\n",pt);
    
    printf(" ****** %u",(ptr-pt));
    return 0;
}