#include <iostream>
using namespace std;
class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudent()
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
class Result : public Student
{
private:
    float m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter Marks of 3 Subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    float calculateTotal()
    {
        return m1 + m2 + m3;
    }
    float calculateAverage()
    {
        return calculateTotal() / 3;
    }

    void displayResult()
    {
        displayStudent();

        cout << "Marks 1: " << m1 << endl;
        cout << "Marks 2: " << m2 << endl;
        cout << "Marks 3: " << m3 << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
};

int main()
{
    Result r;
    r.getStudent();
    r.getMarks();

    cout << "\n----- Student Result -----" << endl;
    r.displayResult();

    return 0;
}