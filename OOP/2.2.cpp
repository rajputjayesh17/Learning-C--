#include <iostream>
using namespace std;
class Employee
{
protected:
    int empId;
    string name;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);
    }
};

class Salary : public Employee
{
private:
    float basicPay;

public:
    void getSalary()
    {
        cout << "Enter Basic Pay: ";
        cin >> basicPay;
    }
    float calculateGross()
    {
        float gross;
        gross = basicPay + (0.2 * basicPay) + (0.1 * basicPay);
        return gross;
    }
    void display()
    {
        cout << "\n----- Employee Salary Details -----" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Gross Salary: " << calculateGross() << endl;
    }
};
int main()
{
    Salary s;
    s.getEmployee();
    s.getSalary();
    s.display();
    return 0;
}