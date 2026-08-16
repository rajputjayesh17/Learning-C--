#include <iostream>
using namespace std;
class Interest
{
    float principal;
    float rate;
    float time;

public:
    void getData()
    {
        cout << "Enter the principal Amount: ";
        cin >> principal;
        cout << "Enterr the rate of interest: ";
        cin >> rate;
        cout << "Enter the time period: ";
        cin >> time;
    }
    float calculateSI()
    {
        return principal * rate * time / 100;
    }
    void display()
    {
        cout << "Simple Interst: " << calculateSI() << endl;
        cout << "Final Amount: " << calculateSI() + principal << endl;
    }
};
int main()
{
    Interest i;
    i.getData();
    i.display();
    return 0;
}