#include <stdio.h>
float balance = 0;

void deposit(){
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);

    if(amount > 0){
        printf("Your deposit of Ksh:%.2f was successfull\n", amount);
        balance += amount;
    }else{
        printf("The amount is too low for a deposit.\n");
    }
}
 
void withdraw(){
    float withdraw;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance){
        printf("Your withdrawal of Ksh%.2f was successful\n", withdraw);
        balance -= withdraw;
    }else{
        printf("Your balnce is too low for a withdrawal.\n");
    }
}

int main(){
    int choice;
    int selection;

    printf("Do you wish to continue: press 1 to continue press 2 to exit");
    scanf("%d", &selection);
    if(selection == 1){
        do{
          printf("---------------WELCOME---------\n");
          printf("---------------SERVICES----------\n");
          printf("1.DEPOSIT\n");
          printf("2.WITHDRAW\n");
          printf("3.CHECK BALANCE\n");
          printf("4.EXIT\n");
          printf("Enter your choice: ");
          scanf("%d", &choice);

          if(choice == 1){
            deposit();
          }else if (choice == 2)
          {
            withdraw();
          }else if (choice == 3){
            printf("Your balance is Ksh%.2f\n", balance);
          }else if (choice == 4){
            printf("Thank you for choosing us\n");
            printf("EXITING");
          }
          
    }while( choice !=4);
    }else{
        printf("Thank you for staying with us!!");
    }
    return 0;
}
