#include <iostream>
using namespace std;
class BankAccount
{
    int accNo;
    string name;
    float balance;

public:
    BankAccount(int a, string n, float b)
    {
        accNo = a;
        name = n;
        balance = b;
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << "$" << amount << " Deposited to account!!" << endl;
    }
    void withdraw(float amount)
    {
        if (balance > amount)
        {
            balance -= amount;
            cout << "$" << amount << " withdrawalaled from account!!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!!" << endl;
        }
    }
    void display()
    {
        cout << "Balance: $" << balance << endl;
    }
};
int main()
{
    BankAccount a(1000, "Jayesh", 10000);
    a.deposit(1000);
    a.withdraw(1500);
    a.display();
    return 0;
}