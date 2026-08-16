#include <iostream>
using namespace std;
class Employee
{
    int empId;
    string name;
    float basicSalary;

public:
    Employee(int id, string n, float salary)
    {
        empId = id;
        name = n;
        basicSalary = salary;
    }
    float calculateSalary()
    {
        return basicSalary * 1.3;
    }
    void display()
    {
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << basicSalary * 0.2 << endl;
        cout << "DA: " << basicSalary * 0.1 << endl;
        cout << "Gross Salary: " << calculateSalary() << endl;
    }
};
int main()
{
    Employee e(1001, "Jayesh", 150000);
    e.display();
    return 0;
}