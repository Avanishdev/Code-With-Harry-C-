#include<iostream>
using namespace std;
class base1{
int data1;
public:
base1(int i){
data1=i;
cout<<"Constructor base1 is called!!"<<endl;
}
void print(){
    cout<<"The value of data1 is "<<data1<<endl;
}
};
class base2{
int data2;
public:
base2(int i){
data2=i;
cout<<"Constructor base2 is called!!"<<endl;
}
void print(){
    cout<<"The value of data1 is "<<data2<<endl;
}
};
class dervieved:public base1,public base2{
int der1,der2;
public:
dervieved(int a,int b,int c, int d):base1(a),base2(b){//initialization
    der1=c;
    der2=d;
    cout<<"Constructor derieved is called!!"<<endl;
}
void print(){
    base1::print();//ambiguity resolution
    base2::print();
    cout<<"The value of der is "<<der1<<" and "<<der2<<endl;
}
};
int main(){
dervieved d(1,2,3,4);
d.print();

return 0;
}