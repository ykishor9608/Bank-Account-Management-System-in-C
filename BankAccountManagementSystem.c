#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int accountNumber;
    char accountHolderName[100];
    float balance;
} BankAccount;

void createAccount(BankAccount *account);
void depositMoney(BankAccount *account);
void withdrawMoney(BankAccount *account);
void checkBalance(const BankAccount *account);

int main() {
    BankAccount account;
    int choice;

    account.balance = 0;

    while (1) {
        printf("\nBank Account Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&account);
                break;
            case 2:
                depositMoney(&account);
                break;
            case 3:
                withdrawMoney(&account);
                break;
            case 4:
                checkBalance(&account);
                break;
            case 5:
                printf("Exiting the system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void createAccount(BankAccount *account) {
    printf("Enter account number: ");
    scanf("%d", &account->accountNumber);
    printf("Enter account holder name: ");
    scanf("%s", account->accountHolderName);
    account->balance = 0;
    printf("Account created successfully!\n");
}

void depositMoney(BankAccount *account) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        account->balance += amount;
        printf("Amount deposited successfully!\n");
    } else {
        printf("Invalid amount. Please enter a positive value.\n");
    }
}

void withdrawMoney(BankAccount *account) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        printf("Amount withdrawn successfully!\n");
    } else {
        printf("Invalid amount or insufficient balance.\n");
    }
}

void checkBalance(const BankAccount *account) {
    printf("Account Number: %d\n", account->accountNumber);
    printf("Account Holder Name: %s\n", account->accountHolderName);
    printf("Current Balance: %.2f\n", account->balance);
}