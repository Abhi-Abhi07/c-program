// Project For Parking Managment !
#include<stdio.h>
#include<stdlib.h>

int nocycle=0, nobike=0, noscooty=0, noriksha=0, nocar=0, nobus=0;
int amount=0, noVehicle=0;

int menu(){
    int choice;
    printf("\n\n*******choices are*******");
    printf("\n1. Enter Cycle !");
    printf("\n2. Enter Bike !");
    printf("\n3. Enter Scooty !");
    printf("\n4. Enter Riksha !");
    printf("\n5. Enter Car !");
    printf("\n6. Enter Bus !");
    printf("\n7. Show Data !");
    printf("\n8. Delete Data !");
    printf("\n9. Exit !");
    printf("\n\nEnter Choice : ");
    scanf("%d",&choice);
    return choice;
}

void Cycle(){
    nocycle++;
    noVehicle++;
    amount=amount;
    printf("\nEntry Succesful for Cycle");
}

void Bike(){
    nobike++;
    noVehicle++;
    amount=amount+10;
    printf("\nEntry Succesful for Bike");
}

void Scooty(){
    noscooty++;
    noVehicle++;
    amount=amount+10;
    printf("\nEntry Succesful for Scooty");
}

void Riksha(){
    noriksha++;
    noVehicle++;
    amount=amount+20;
    printf("\nEntry Succesful for Riksha");
}

void Car(){
    nocar++;
    noVehicle++;
    amount=amount+50;
    printf("\nEntry Succesful for Car");
}

void Bus(){
    nobus++;
    noVehicle++;
    amount=amount+100;
    printf("\nEntry Succesful for Bus");
}

void ShowDetail(){
    printf("\n\n*******Details are*******");
    printf("\nTotal Number of Cycle is : %d",nocycle);
    printf("\nTotal Number of Bike is : %d",nobike);
    printf("\nTotal Number of Scooty is : %d",noscooty);
    printf("\nTotal Number of Riksha is : %d",noriksha);
    printf("\nTotal Number of Car is : %d",nocar);
    printf("\nTotal Number of Bus is : %d",nobus);
    printf("\nTotal Number of Vehicle is : %d",noVehicle);
    printf("\nTotal Amount is : %d/-",amount);
}

void Delete(){
    nocycle=0;
    nobike=0;
    noscooty=0;
    noriksha=0;
    nocar=0;
    nobus=0;
    amount=0;
    noVehicle=0;
    printf("\nData will be Deleted Succesfully");
    }
int main(){
    do{
        switch(menu()){
            case 1:
            Cycle();
            break;

            case 2:
            Bike();
            break;

            case 3:
            Scooty();
            break;

            case 4:
            Riksha();
            break;

            case 5:
            Car();
            break;

            case 6:
            Bus();
            break;

            case 7:
            ShowDetail();
            break;

            case 8:
            Delete();
            break;

            case 9:
            exit(0);

            default:
            printf("\n\nInvalid Choice !");
        }
    }while(1);
    return 0;
}