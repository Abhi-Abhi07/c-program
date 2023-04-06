#include<stdio.h>

int main(){
    char st1[20];
    char st2[30];
    printf("Enter first string : ");
    scanf("%s",st1);
    printf("Enter second string : ");
    char ch;
    int i=0;
    while(ch!='\n'){
        fflush(stdin);
        scanf("%c",&ch);
        st2[i]=ch;
        i++;
    }
    st2[i]='\0';
    printf("St1 is : %s\n",st1);
    printf("St2 is : %s\n",st2);
    return 0;
}