#include<stdio.h>

int main(){
    int maths;
    int che;
    int phy;

    printf("Enter the maths marks : ");
    scanf("%d",&maths);
    printf("Enter the che marks : ");
    scanf("%d",&che);
    printf("Enter the phy marks : ");
    scanf("%d",&phy);

    int totalmarks=(maths+che+phy)/3;
    if ((totalmarks>=40) && (maths>=33) && (che>=33) && (phy>=33))
    {
        printf("You are pass");
    }
    else{
        printf("You are fail");
    }
    
    return 0;
}