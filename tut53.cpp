#include<iostream>
using namespace std;
class A{
int a;
public:
A & setData(int a){
this->a=a;//not recommended
return *this;
}
void getData(){
    cout<<"The value of a in class A is "<<a<<endl;
}
};
int main(){
A a1;
a1.setData(4).getData();
// a1.getData();//explicitly calling function getData()

return 0;
}