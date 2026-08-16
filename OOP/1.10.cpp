#include <iostream>
using namespace std;
class Distance
{
    int km;
    int meter;

public:
    void setDistance(int k, int m)
    {
        km = k;
        meter = m;
    }

    Distance addDistance(Distance d)
    {
        Distance temp;

        temp.km = km + d.km;
        temp.meter = meter + d.meter;
        if (temp.meter >= 1000)
        {
            temp.km += temp.meter / 1000;
            temp.meter = temp.meter % 1000;
        }

        return temp;
    }
    void display()
    {
        cout << "Distance: " << km << " km " << meter << " meters" << endl;
    }
};

int main()
{
    Distance d1, d2, result;
    d1.setDistance(5, 750);
    d2.setDistance(3, 500);
    result = d1.addDistance(d2);
    cout << "First Distance: ";
    d1.display();
    cout << "Second Distance: ";
    d2.display();
    cout << "Total Distance: ";
    result.display();
    return 0;
}