#include "Account.hpp"
#include <iostream>
#include <string>
using namespace std;

Account::Account():Account(0, "Unknown", 0.0, 0) {}
Account::Account(long accountNumber, string name, double balance, bool type):accountNumber(accountNumber), name(name), balance(balance), type(type) {}
void Account::deposit(double amount) {
    balance += amount;
}
void Account::withdraw(double amount) {

    if(type == 0) {
        if (balance - amount >= 500) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
            cout << "you can withdraw  maximum of " << balance - 500 << endl;
        }
    } else {
        if (balance - amount >= 0) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
            cout << "you can withdraw  maximum of " << balance << endl;
        }
    }
   


}

void Account::display_account_info() {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
    cout << "Type: " << (type == 0 ? "Savings" : "Current") << endl;
}

long Account::get_account_number() {
    return accountNumber;
}

string Account::get_name() {
    return name;
}

double Account::get_balance() {
    return balance;
}

bool Account::get_type() {
    return type;
}





