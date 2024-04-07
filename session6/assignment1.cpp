


#include <iostream>
using namespace std;
class BankAccount
{
    protected:
    string accountNumber;
    double balance;
    public:

    BankAccount(string accountNumber, double balance)
    {
        this->accountNumber = accountNumber;
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
    void displayInfo()
    {
        cout << "Account number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount: public BankAccount
{
    private:
    double interestRate;
    public:

    SavingsAccount(string accountNumber, double balance, double interestRate): BankAccount(accountNumber,balance)
  
  {
        this->interestRate = interestRate;
    }
    void calculateInterest()
    {
        balance += balance * interestRate;
    }
    void displayInfo()
    {
        BankAccount::displayInfo();
        cout << "Interest rate: " << interestRate << endl;
    }
};

class CheckingAccount: public BankAccount
{

    private:
    double transactionFee;
    public:
    CheckingAccount(string accountNumber, double balance, double transactionFee): BankAccount(accountNumber,balance)
    {
        this->transactionFee = transactionFee;
    }


    void deductTransactionFee()
    {
        balance -= transactionFee;
    }
    void displayInfo()
    {
        BankAccount::displayInfo();
        cout << "Transaction fee: " << transactionFee << endl;
    }
};


int main()

{

    SavingsAccount sa("123", 456,0.1);
    sa.deposit(100);
    sa.withdraw(50);
    sa.calculateInterest();
    sa.displayInfo();

    CheckingAccount ca("456", 789, 10);
    ca.deposit(100);
    ca.withdraw(50);
    ca.deductTransactionFee();
    ca.displayInfo();


    
}

