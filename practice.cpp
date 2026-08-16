#include <iostream>
using namespace std;
int main()
{
    int binary=1001,decimal=0,pow=1;
    while(binary >0)
    {
        decimal=decimal+(binary%10)*pow;
        pow*=2;
        binary/=10;
    };
    cout<<decimal;
    return 0;
}