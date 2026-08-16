#include <iostream>
using namespace std;
class Product
{
    int productId;
    string productName;
    float price;
    int quantity;

public:
    Product(int id, string name, float p, int q)
    {
        productId = id;
        productName = name;
        price = p;
        quantity = q;
    }
    float totalCost()
    {
        return price * quantity;
    }
    void display()
    {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Cost: " << totalCost() << endl;
    }
};
int main()
{
    int id, q;
    string name;
    float p;
    cout << "Enter Product ID: ";
    cin >> id;
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Price: ";
    cin >> p;
    cout << "Enter Quantity: ";
    cin >> q;
    Product p1(id, name, p, q);
    cout << "\nProduct Details:\n";
    p1.display();
    return 0;
}