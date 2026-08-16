#include <iostream>
using namespace std;
class Account
{
protected:
    int accNo;
    float balance;

public:
    void getAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
};
class Transaction
{
public:
    void deposit(float amount, float &balance)
    {
        balance = balance + amount;
    }
    void withdraw(float amount, float &balance)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
};
class Customer : public Account, public Transaction
{
public:
    void display()
    {
        cout << "Account Number: " << accNo << endl;
        cout << "Current Balance: " << balance << endl;
    }
    void performTransaction()
    {
        int choice;
        float amount;
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        cout << "Enter Amount: ";
        cin >> amount;

        if (choice == 1)
        {
            deposit(amount, balance);
        }
        else if (choice == 2)
        {
            withdraw(amount, balance);
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
    }
};
int main()
{
    Customer c;
    c.getAccount();
    c.performTransaction();
    c.display();
    return 0;
}