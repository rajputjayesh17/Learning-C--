#include <iostream>
using namespace std;

template <class T>
class Add
{
    T a, b;
public:
    Add(T x, T y)
    {
        a = x;
        b = y;
    }
    void showSum()
    {
        cout << "Sum = " << a + b << endl;
    }
};
int main()
{
    Add<int> obj1(10, 20);
    obj1.showSum();
    Add<float> obj2(2.5, 3.5);
    obj2.showSum();

    return 0;
}