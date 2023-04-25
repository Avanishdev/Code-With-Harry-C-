#include<iostream>
using namespace std;
class A{
public:
int var1=1;
virtual void display(){
    cout<<"The value of var in class A is "<<var1<<endl;
}

}a;
class B{
public:
int var2=2;
virtual void display(){
    cout<<"The value of var in class B is "<<var2<<endl;
}
}b;
class C: /*virtual */public A , public B {
public:
int var3=3;
 virtual void display(){
    cout<<"The value of var in class A is "<<var1<<endl;
    cout<<"The value of var in class B is "<<var2<<endl;
    cout<<"The value of var in class C is "<<var3<<endl;
}
}c;
class D:public C{
public:
int var4=4;
void display(){
    // A::display();//ambiguity resolution
        cout<<"The value of var in class A is "<<var1<<endl;
    cout<<"The value of var in class B is "<<var2<<endl;
    cout<<"The value of var in class C is "<<var3<<endl;
    cout<<"The value of var in class A is "<<var4<<endl;
}
}d;//OBJECTS
int main(){
A *ptr;
ptr=&d;

ptr->display();



return 0;
}