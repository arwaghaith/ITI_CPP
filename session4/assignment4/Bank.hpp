
#include <iostream>
#include <string>
#include <vector>
#include "Account.hpp"
using namespace std;
class Bank {

private:
            vector<Account> accounts;

    long total_balance;
    public:

    Bank();
    Bank(vector<Account>, long);

    void create_account(Account);
    long get_total_balance();
     void Display_all_accounts();

     vector<Account> get_accounts() {
         return accounts;
     }
};
