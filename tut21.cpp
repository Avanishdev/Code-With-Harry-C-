#include<iostream>
using namespace std;

// typedef struct Animal{
// string name;
// int weight;
// char favfood;
// }anml;// Struct

class Animal{
    private:
    int a,b,c;
    public:
    int d,e;
void setdata(int a1,int b1,int c1);// Declaration
void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        };
};
void Animal::setdata(int a1,int b1,int c1){
    
a=a1;
b=b1;
c=c1;
}
int main(){
    
// anml dog;
// dog.name="Tuffy";
// dog.weight=65;
// dog.favfood='C';
// cout<<dog.name;

Animal dog;

dog.d=34;
dog.e=69;
dog.setdata(1,2,4);
dog.getdata();

return 0;
}