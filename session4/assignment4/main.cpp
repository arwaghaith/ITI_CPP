#include "Account.hpp"
#include "Bank.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
long  getNew_Account_Number(Bank bank) {
    long accountNumber;
    bool isUnique;
    do {
        accountNumber = rand() % 100000;
        isUnique = true;
        for (int i = 0; i < bank.get_accounts().size(); i++) {
            if (accountNumber == bank.get_accounts()[i].get_account_number()) {
                isUnique = false;
                break;
            }
        }
    } while (!isUnique);
        
    return accountNumber;
}
double get_total_balance (Bank bank) {
    double total_balance = 0;
    for (int i = 0; i < bank.get_accounts().size(); i++) {
        total_balance += bank.get_accounts()[i].get_balance();
    }
    return total_balance;
}

int main()

{

string name;
long accountNumber;
double balance;
bool Type;
    Bank bank;
    int choice;
    do {
        cout << "1) Create account" << endl;
        cout << "2) Display all accounts" << endl;
        cout << "3) Total balance" << endl;
        cout << "4) Deposit" << endl;
        cout << "5) Withdraw" << endl;
        cout << "6) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
            cout << "Create account" << endl;
            cout <<" enter name: ";
            cin >> name;
            cout << "Enter account type: ";
            cout<<"1) Savings"<<endl;
            cout<<"0) Current"<<endl;
            cin >> Type;
            accountNumber = getNew_Account_Number(bank);
            balance=get_total_balance(bank);
            bank.create_account(Account(accountNumber, name, balance, Type));
            break
            ;
            case 2:
            cout << "Display all accounts" << endl;
            bank.Display_all_accounts();
            break;
            case 3:
            cout << "Total balance: " << bank.get_total_balance() << endl;
            break;
            case 4:
            if (bank.get_accounts().size() == 0) {
                cout << "No_accounts available" << endl;
            } else {
                long accountNumber;
                double amount;
                cout << "Enter account number: ";
                cin >> accountNumber;
                for (int i = 0; i < bank.get_accounts().size(); i++) {
                    if (accountNumber == bank.get_accounts()[i].get_account_number()) {
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        bank.get_accounts()[i].deposit(amount);
                        break;
                    }
                }
            }

            break;
            case 5:

            if (bank.get_accounts().size() == 0) {
                cout << "No accounts available" << endl;
            } else {
                long accountNumber;
                double amount;
                cout << "Enter account number: ";
                cin >> accountNumber;
                for (int i = 0; i < bank.get_accounts().size(); i++) {
                    if (accountNumber == bank.get_accounts()[i].get_account_number()) {
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        bank.get_accounts()[i].withdraw(amount);
                        break;
                    }
                }
            }
            break;
            case 6:

            cout << "Exiting..." << endl;
            break;
            default:
            cout << "Invalid choice" << endl;
            break;






}
} while (choice != 6);
return 0;
}