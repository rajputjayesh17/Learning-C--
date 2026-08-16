#include <iostream>
using namespace std;

class Calculator
{
    float a, b;

public:
    void setValues(float x, float y)
    {
        a = x;
        b = y;
    }
    float add() { return a + b; }
    float subtract() { return a - b; }
    float multiply() { return a * b; }
    float divide()
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};
int main()
{
    Calculator c;
    float x, y;
    c.setValues(5, 10);
    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.subtract() << endl;
    cout << "Multiplication: " << c.multiply() << endl;
    cout << "Division: " << c.divide() << endl;
    return 0;
}