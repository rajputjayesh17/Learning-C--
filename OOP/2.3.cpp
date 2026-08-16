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
};
class Exam : public Student
{
protected:
    float m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter Marks of 3 Subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};
class Result : public Exam
{
public:
    float total()
    {
        return m1 + m2 + m3;
    }
    float percentage()
    {
        return total() / 3;
    }
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks 1: " << m1 << endl;
        cout << "Marks 2: " << m2 << endl;
        cout << "Marks 3: " << m3 << endl;
        cout << "Total Marks: " << total() << endl;
        cout << "Percentage: " << percentage() << "%" << endl;
    }
};
int main()
{
    Result r;
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}