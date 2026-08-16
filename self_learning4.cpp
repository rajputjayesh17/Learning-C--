#include <iostream>
using namespace std;

// Function template
template <typename T>
T findMax(T a, T b)
{
    if(a>b)
       return a;
    else
       return b;
}

int main()
{
    cout << "Max of 10 and 20: " << findMax(10, 20) << endl;
    cout << "Max of 5.5 and 2.3: " << findMax(5.5, 2.3) << endl;

    return 0;
}