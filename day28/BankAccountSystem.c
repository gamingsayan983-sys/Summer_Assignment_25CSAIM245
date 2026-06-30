#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank b;
    int choice;
    float amount;

    while (1) {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &b.accNo);

            printf("Enter Account Holder Name: ");
            scanf("%s", b.name);

            printf("Enter Initial Balance: ");
            scanf("%f", &b.balance);

            printf("Account created successfully.\n");
            break;

        case 2:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            b.balance = b.balance + amount;
            printf("Amount deposited successfully.\n");
            break;

        case 3:
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if (amount <= b.balance) {
                b.balance = b.balance - amount;
                printf("Amount withdrawn successfully.\n");
            } else {
                printf("Insufficient balance.\n");
            }
            break;

        case 4:
            printf("\nAccount Number : %d\n", b.accNo);
            printf("Account Holder : %s\n", b.name);
            printf("Balance        : %.2f\n", b.balance);
            break;

        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}