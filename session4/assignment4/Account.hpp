#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
using namespace std;


class Account 
{
    private:
    long accountNumber;
    string name;
    double balance;
    bool type;

    public:
    Account();
    Account(long, string, double, bool);
    void deposit(double);
    void withdraw(double);
    void display_account_info();
    long get_account_number();
    string get_name();
    double get_balance();
    bool get_type();
};

#endif // ACCOUNT_HPP
