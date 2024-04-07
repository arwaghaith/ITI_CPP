

#include <iostream>
using namespace std;
class Account
{
    public:
    int accountNumber;
    string accountHolder;
    double balance;

    Account()
    {
        accountNumber = 0;
        accountHolder = nullptr;
        balance = 0;
    }

    Account(int accountNumber, string accountHolder, double balance)
    {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};


class SavingsAccount:public Account

{

    public:

    double interestRate;

    SavingsAccount():Account()

    {

        interestRate = 0;

    }

    SavingsAccount(int accountNumber, string accountHolder, double balance, double interestRate):Account(accountNumber, accountHolder, balance)

    {

        this->interestRate = interestRate;

    }

    void calculateInterest()

    {

        balance += balance * interestRate;
     cout<< "Interest calculated and added. ";
        cout << "New Balance:  $" << balance << endl;

    }

    void display()
    {
        Account::display();
    
    }

};

class CheckingAccount: public Account

{

    
    public:

    double transactionFee;

    CheckingAccount():Account()

    {

        transactionFee = 0;

    }

    CheckingAccount(int accountNumber, string accountHolder, double balance, double transactionFee):Account(accountNumber, accountHolder, balance)

    {

        this->transactionFee = transactionFee;

    }

    void deductTransactionFee()

    {

        balance -= transactionFee;
           cout<< "Transaction fee deducted. ";
        cout << "New Balance:  $" << balance << endl;


    }

    void display()
    {
        Account::display();
      
    }

};


int main()

{



    SavingsAccount *s1 = new SavingsAccount(101, "Ahmed", 1000, 0.575);
    s1->display();
    s1->calculateInterest();
    s1->display();

    cout << endl;

    CheckingAccount *c1 = new CheckingAccount(201, "mohamed", 1500, 202);

    c1->display();
    c1->deductTransactionFee();
    c1->display();
    cout << endl;

    delete s1;
    delete c1;

    return 0;
}


