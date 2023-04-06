#include<stdio.h>
#include<stdlib.h>

int TotalAmount=1000;
int wa;
int da;
int ta;
int tda=0;
int twa=0;
int tta=0;

int menu(){
    int choice;
    printf("\n\n*****choicese are*****");
    printf("\n1. Deposit Amount");
    printf("\n2. Withdrow Amount");
    printf("\n3. Transfer Amount");
    printf("\n4. Check Details Amount");
    printf("\n5. exit !");
    printf("\n\nEnter choice : ");
    scanf("%d",&choice);
    return choice;
}

void deposit(){
    printf("\nEnter Amount you want to Deposit : ");
    scanf("%d",&da);
    TotalAmount+=da;
    tda+=da;
}

void withdrow(){
    printf("\nEnter Amount you want to Withdrow : ");
    scanf("%d",&wa);
    if(wa<=TotalAmount){
        TotalAmount-=wa;
        twa+=wa;
    }
    else{
        printf("\nIN sufficiet Amount !");
    }
} 

void transfer(){
    printf("\nEnter Amount you want to Transfer : ");
    scanf("%d",&ta);
    if(ta<=TotalAmount){
        TotalAmount-=ta;
        tta+=ta;
    }
    else{
        printf("\nInsufficient Balance !");
    }
}

void checkDetails(){
    printf("\nTotal Amount : %d",TotalAmount);
    printf("\nTotal deposited Amount : %d",tda);
    printf("\nTotal withdrow Amount : %d",twa);
    printf("\nTotal Transfer Amount : %d",tta);
}
int main(){
    do{
        switch (menu())
        {
        case 1: 
        deposit();
        break;
        
        case 2:
        withdrow();
        break;
        
        case 3:
        transfer();
        break;
        
        case 4:
        checkDetails();
        break;

        case 5:
        exit(0);

        default:
            printf("Invalid choice !");
        }
    }while(1);
    return 0;
}