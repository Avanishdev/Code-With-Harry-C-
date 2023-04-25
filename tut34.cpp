#include<iostream>
using namespace std;
class point{
int data;
public:
point(){
    data=0;
}
point(int x){
data=x;
}
point(point &x){//copy constructor
data=x.data;
 cout<<"Copy constructor called!!!"<<endl;
}
  void display(){
            cout<<"The number for this object is "<< data <<endl;
        }
};
int main(){
point x,y,z(45);
x.display();
y.display();
z.display();
point z1(z);//invoked
z1.display();
point z2=z;//invoked
z2.display();
// z3=z;//invalid
return 0;
}