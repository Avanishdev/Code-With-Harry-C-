#include<iostream>
using namespace std;
class Employee{

int id;
static int count;

public:
void setdata(void)
{
    cout<<"Enter the id "<<endl;
    cin>>id;
    count++;
}
void getdata(void)
{
    cout<<"The id of employee is "<<id<<" and this is employee no "<<count<<endl;

    
}

static void getCount(void)
{
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
}

}harry,rohan,ishan;//objects of the class Employee

// Count is the static data member of class Employee
 // Default value is 0
int Employee::count;//count=1000



int main(){   // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

harry.setdata();
harry.getdata();
Employee::getCount();



rohan.setdata();
rohan.getdata();
Employee::getCount();


ishan.setdata();
ishan.getdata();
Employee::getCount();


return 0;
}