#include <iostream>
using namespace std;
int main()
{
    int num, m, reverse = 0, rem;
    cout << "Enter a number: ";
    cin >> num;
    m = num;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    if (reverse == m)
    {
        cout << "Number is a Palindrome" << endl;
    }
    else
    {
        cout << "Number is not a Palindrome" << endl;
    }
}