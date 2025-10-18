#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;

    while (1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. Remaining Balance: %.2f\n", balance);
                } else {
                    printf("Insufficient balance or invalid amount.\n");
                }
                break;

            case 2: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. New Balance: %.2f\n", balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3: // Check Balance
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4: // Exit
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

