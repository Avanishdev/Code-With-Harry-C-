#include<iostream>
using namespace std;
class base{
protected: 
int a;
private:
int b;
};
class derieved:protected base{
public:
void process(int x){
a=x;

}
void display(){
   
    cout<<"The value of protected member a is inherited here: "<<a<<endl;
}
};
int main(){
base b;
derieved d;
d.process(1001);
d.display();
return 0;
}