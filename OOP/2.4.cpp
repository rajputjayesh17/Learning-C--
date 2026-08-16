#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string brand;
    int speed;

public:
    void getVehicle()
    {
        cout << "Enter Vehicle Brand: ";
        cin >> brand;

        cout << "Enter Speed: ";
        cin >> speed;
    }
};
class Car : public Vehicle
{
protected:
    string fuelType;

public:
    void getCar()
    {
        getVehicle();

        cout << "Enter Fuel Type: ";
        cin >> fuelType;
    }
};
class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    void getElectricCar()
    {
        getCar();

        cout << "Enter Battery Capacity (kWh): ";
        cin >> batteryCapacity;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};
int main()
{
    ElectricCar e;
    e.getElectricCar();
    e.display();
    return 0;
}