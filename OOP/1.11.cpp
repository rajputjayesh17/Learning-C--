#include <iostream>
using namespace std;

int main()
{
    int N, evenCount = 0, oddCount = 0;

    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;

    return 0;
}