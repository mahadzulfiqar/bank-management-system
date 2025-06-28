#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    float balance;

public:
    BankAccount(string n, int acc, float bal) {
        name = n;
        accountNumber = acc;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient funds!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
    }

    void showInfo() {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << name << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Balance: " << balance << "\n";
    }
};

int main() {
    BankAccount acc("Mahad Zulfiqar", 123456, 5000.0);

    acc.showInfo();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.showInfo();

    return 0;
}
