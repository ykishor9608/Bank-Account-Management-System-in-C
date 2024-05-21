# Bank-Account-Management-System-in-C
Brief Description of the Bank Account Management System
The Bank Account Management System is a simple C program designed to manage a single bank account. It allows users to perform basic banking operations through a menu-driven interface. The key functionalities of the system include:

Create Account: Initialize a new bank account by setting the account number and account holder's name. The initial balance is set to zero.

Deposit Money: Add a specified amount of money to the account balance. The program ensures that only positive amounts can be deposited.

Withdraw Money: Subtract a specified amount of money from the account balance. The program checks if the withdrawal amount is valid (i.e., it does not exceed the current balance and is positive).

Check Balance: Display the current balance of the account along with the account number and account holder's name.

Exit: Exit the program gracefully.

The program is structured using a BankAccount structure to store account details, and it includes function prototypes for each of the operations. The main loop presents a menu to the user, allowing them to select an operation to perform. Input validation is minimal but ensures that deposit and withdrawal amounts are positive and that withdrawals do not exceed the available balance.
