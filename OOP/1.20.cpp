#include <iostream>
using namespace std;

int main()
{
    int num, m = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0)
    {
        m++;
        num /= 10;
    }
    cout << "Number of digits = " << m << endl;
    return 0;
}