#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = (initialBalance >= 0) ? initialBalance : 0;  // Ensure no negative balance
        cout << "Account " << accountNumber << " created with balance: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money safely
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid withdrawal amount!" << endl;
        }
    }

    // Function to get current balance
    double getBalance() {
        return balance;
    }

    // Function to display account details
    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    int accNum;
    double initialBalance;
    
    // Taking user input for account creation
    cout << "Enter Account Number: ";
    cin >> accNum;
    
    cout << "Enter Initial Balance: $";
    cin >> initialBalance;

    // Creating a BankAccount object with user input
    BankAccount userAccount(accNum, initialBalance);

    int choice;
    double amount;

    // Banking operations loop
    do {
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: $";
                cin >> amount;
                userAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                userAccount.withdraw(amount);
                break;
            case 3:
                cout << "Current Balance: $" << userAccount.getBalance() << endl;
                break;
            case 4:
                userAccount.displayAccountInfo();
                break;
            case 5:
                cout << "Exiting Banking System. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
