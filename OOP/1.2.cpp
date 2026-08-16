#include <iostream>
using namespace std;
class Rectangle
{
    float length;
    float width;

public:
    void setData(float l, float w)
    {
        length = l;
        width = w;
    }
    void area()
    {
        cout << "Area of the rectangle: " << length * width << endl;
    }
    void perimeter()
    {
        cout << "Perimeter of the rectangle: " << 2 * (length + width) << endl;
    }
};
int main()
{
    Rectangle r;
    r.setData(10, 11.2);
    r.area();
    r.perimeter();
    return 0;
}
