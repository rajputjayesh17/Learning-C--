#include <iostream>
using namespace std;

// Base Class : Person
class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }
};
class Student : virtual public Person
{
protected:
    float marks;

public:
    void getMarks()
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};
class Sports : virtual public Person
{
protected:
    float sportsScore;

public:
    void getSportsScore()
    {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};
class Result : public Student, public Sports
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;

        cout << "Total Score: " << marks + sportsScore << endl;
    }
};
int main()
{
    Result r;
    r.getPerson();
    r.getMarks();
    r.getSportsScore();
    r.display();
    return 0;
}