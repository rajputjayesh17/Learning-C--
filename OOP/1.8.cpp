#include <iostream>
using namespace std;
class Temperature
{
    float celsius;

public:
    void setTemp(float c)
    {
        celsius = c;
    }
    float toFahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }
};
int main()
{
    Temperature t;
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    t.setTemp(c);
    cout << "Temperature in Fahrenheit: " << t.toFahrenheit() << endl;
    return 0;
}