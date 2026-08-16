#include <iostream>
using namespace std;

class Vehicle
{
    public:
    string brand;
    int speed;
    void inputVehicle()
    {
        cout<<"Enter Brand Name :";
        cin>>brand;
        cout<<"Enter Maximum Speed :";
        cin>>speed;
    }
    void displayVehicle()
    {
        cout<<"BRAND: "<<brand<<endl<<"MAX SPEED: "<<endl;
    }
};
class car : public Vehicle
{
    public:
    int doors;
    void cardetails()
    {
        cout<<"Enter number of doors: ";
        cin>>doors;
    }
    void displaycardetails()
    {
        displayVehicle();
        cout<<"NO. OF DOORS: "<<doors<<endl;
    }
};
int main()
{
    car c;
    c.inputVehicle();
    c.cardetails();
    c.displaycardetails();
    return 0;
}
