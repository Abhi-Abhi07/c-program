#include<stdio.h>

int main(){
    // int radius=7;
    // float pai=3.14;
    // float area=radius*radius*pai;
    // printf("The area of circle is %f",area);

    int radius;
    float pai=3.14;
    
    printf("Enter the radius of circle ");
    scanf("%d",&radius);
    float area=radius*radius*pai;
    printf("The area of circle is %f\n",area);
    
    int heigth=10;
    float volumeofcylinder=radius*radius*pai*heigth;
    printf("The volume of cylinder is %f",volumeofcylinder);
    return 0;
}