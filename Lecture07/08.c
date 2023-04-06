#include<stdio.h>
int print(int n_student, int n_subject, int marks[][5]){
    printf("Enter the numer : ");
    for(int i=0; i<n_student; i++){
        for(int j=0; j<n_subject; j++){
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<n_student; i++){
        for(int j=0; j<n_subject; j++){
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n_subject=5;
    int n_student=3;
    int marks[3][5];
    print(5,3,marks);
    return 0;
}