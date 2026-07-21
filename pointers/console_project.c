#include<stdio.h>
struct BankAccount{
    int accNo;
    char name[30];
    float balance;
};

int main(){
    struct BankAccount acc;
    int choice;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);
    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);
    printf("Enter Initial Balance: ");
    scanf("%f",&acc.balance);
    do{
        printf("\n==== BANK MENU ====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            acc.balance+=amount;
            printf("Amount Deposited Successfully.\n");
            break;

            case 2:
            printf("Enter Withdraw amount: ");
            scanf("%f",&amount);
            if (amount <= acc.balance){
                acc.balance -= amount;
                printf("Amount Withdrawn Successfully\n");
            }
            else{
                printf("Insufficient Bank Balance.\n");
            }
            break;

            case 3:
            printf("\nAccount Number: %d\n", acc.accNo);
            printf("Account Holder: %s\n", acc.name);
            printf("Balance: %.2f\n", acc.balance);
            break;


            case 4:
            printf("Thank You!\n");
            break;

            default:
            printf("Invalid choice. \n");

        }
    }while (choice !=4);
    return 0;
}