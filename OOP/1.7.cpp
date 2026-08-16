#include <iostream>
using namespace std;

class Time
{
    int hours;

public:
    Time(int h)
    {
        hours = h;
    }
    int toMinutes()
    {
        return hours * 60;
    }
    int toSeconds()
    {
        return hours * 3600;
    }
};
int main()
{
    int h;
    cout << "Enter hours: ";
    cin >> h;
    Time t(h);
    cout << "Minutes: " << t.toMinutes() << endl;
    cout << "Seconds: " << t.toSeconds() << endl;
    return 0;
}