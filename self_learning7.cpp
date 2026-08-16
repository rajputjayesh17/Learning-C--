#include <iostream>
using namespace std;
class Fibonacci 
{
    int n; 
public:
    Fibonacci(int n) 
    {
        int a = 0, b = 1, next;
        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; i++) 
        {
            cout << a << "   ";
            next = a + b;
            a = b;
            b = next;
        }
    }
};
int main() 
{
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    Fibonacci fib(n);
    return 0;
}