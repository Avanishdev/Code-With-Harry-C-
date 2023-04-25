#include<iostream>
using namespace std;
class complex{
int a,b;
public:
// Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
 void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    complex(void);//constructor declaration
};
complex::complex(void){// ----> This is a default constructor as it takes no parameters
a=0;
b=0;
}
int main(){
complex c;
c.printNumber();

return 0;
}
/* Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address*/
