#include <iostream>
using namespace std;
class Academic
{
protected:
    float marks;

public:
    void getAcademic()
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};
class Sports
{
protected:
    float score;

public:
    void getSports()
    {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
};
class Result : public Academic, public Sports
{
public:
    float totalScore()
    {
        return marks + score;
    }
    void display()
    {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total Score: " << totalScore() << endl;
    }
};
int main()
{
    Result r;
    r.getAcademic();
    r.getSports();
    r.display();
    return 0;
}