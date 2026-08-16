#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    cout<<"Enter the number: ";
    cin>>*p;
    cout<<"Entered number is"<<*p<<endl;
    delete p;
    return 0;
}