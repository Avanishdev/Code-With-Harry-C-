#include<iostream>
using namespace std;
class base{
    public:
    int var1;
    void display(){
        cout<<"Base class func invoked!!"<<endl;
        cout<<"The value of var in class base  is "<<var1<<endl;
    }
};
class derieved:public base{
public:
int var2;
void display(){
cout<<"Derieved class func invoked!!"<<endl;

    cout<<"The value of var in class base is "<<var1<<endl;
    cout<<"The value of var in class derieved is "<<var2<<endl;
} 
};
int main(){
base *base_ptr;
base b;
derieved d;
base_ptr=& d;// Pointing base class pointer to derived class

base_ptr->var1=4;
base_ptr->display();
// base_ptr->var2=4;//throws an error

derieved * der_ptr;
der_ptr=&d;// Pointing derieved class pointer to derived class by d(class derieved object)

der_ptr->var1=123;
der_ptr->var2=234;
der_ptr->display();
return 0;
}