#include <iostream>
using namespace std;
class Person
{
protected:
    string name;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }
};
class Employee : virtual public Person
{
protected:
    int empId;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
    }
};
class Student : virtual public Person
{
protected:
    int rollNo;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
};
class Manager : public Employee, public Student
{
public:
    void display()
    {
        ;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};
int main()
{
    Manager m;
    m.getPerson();
    m.getEmployee();
    m.getStudent();
    m.display();
    return 0;
}