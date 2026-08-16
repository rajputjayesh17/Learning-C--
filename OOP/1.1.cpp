#include <iostream>
using namespace std;
class student
{
   int rollNo;
   string name;
   float marks;
public:
   void getData(){
      cout<<"Enter the roll number: ";
      cin>>rollNo;
      cout<<"Enter the name: ";
      cin>>name;
      cout<<"Enter the marks: ";
      cin>>marks;
   }
   void displayData(){
      cout<<"Name: "<<name<<endl;
      cout<<"Roll No. "<<rollNo<<endl;
      cout<<"Marks: "<<marks<<endl;
   }
};
int main(){
   student s1;
   s1.getData();
   s1.displayData();
   return 0;
}
