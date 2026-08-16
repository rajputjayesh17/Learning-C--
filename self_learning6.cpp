#include <iostream>
using namespace std;
class STUDENT 
{
public:
    int roll;
    string name;
    void getData()
    {
        cout<<"Enter Roll No: ";
        cin>>roll;
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,name);
    }
    void display()
    {
        cout<<"Roll No: "<<roll<<endl<<"Name: "<<name<<endl;
    }
};
int main() 
{
    STUDENT s1;
    STUDENT *ptr;
    ptr=&s1;
    ptr->getData();
    ptr->display();
    return 0;
}