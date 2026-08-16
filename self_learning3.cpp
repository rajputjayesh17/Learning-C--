#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
double add(double a,double b){
    return a+b;
}
int main()
{
    cout<<"Sum of 2 integers:"<<add(100,200)<<endl;
    cout<<"Sum of 3 integers:"<<add(100,150,200)<<endl;
    cout<<"Sum of 2 double:"<<add(25.5,35.9)<<endl;
    return 0;
}