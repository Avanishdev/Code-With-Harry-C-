#include<iostream>
using namespace std;
class base{
protected:
int var;
public:
base(int var){
this->var=var;//this pointer with constructor
}
virtual void display()=0;//pure virtual func
//abstract base class=>A class which is used for inheritance of class derived.Basically,for making another derived classes
};
class derived1:virtual public base{
int var1;
public: 
derived1(int var,int y):base(var){//constructor with initialization list or section
var1=y;
}
void display(){
    cout<<"The value of var class base is "<<var<<endl;
    cout<<"The value of var class derived is "<<var1<<endl;
    
}
};
class derived2:virtual public base{
int var2;
public: 
derived2(int var,int y):base(var){//constructor with initialization list or section
var2=y;
}
void display(){
    cout<<"The value of var class base is "<<var<<endl;
    // cout<<"The value of var class derived is "<<var1<<endl;
    cout<<"The value of var in another class derived is "<<var2<<endl;
    
}
};
int main(){
    // base obj(1);//throws an error bc obj of abstract base class is not allowed
    derived1 obj1(1,2);
    derived2 obj2(3,4);
// obj1.display();

base *ptr;
ptr=&obj1;
ptr->display();
ptr=&obj2;
ptr->display();


return 0;
}