#include "Bank.hpp"
#include "Account.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
Bank::Bank():Bank(vector<Account>(), 0) {};

Bank::Bank(vector<Account> accounts, long total_balance):accounts(accounts), total_balance(total_balance) {};
void Bank::create_account(Account account) {


    accounts.push_back(account);
    total_balance += account.get_balance();
}

long Bank::get_total_balance() {
    return total_balance;
}

void Bank::Display_all_accounts() {
    for (int i = 0; i < accounts.size(); i++) {
        accounts[i].display_account_info();
    }
}
    

