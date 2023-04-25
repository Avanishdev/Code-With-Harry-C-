#include<iostream>
using namespace std;
class base1{
protected: 
int inp1;
public:
void base1calc(int i){
inp1=i;
}
};
class base2{
protected: 
int inp2;
public:
void base2calc(int i){
inp2=i;
}
};
class base3{
protected: 
int inp3;
public:
void base3calc(int i){
inp3=i;
}
};
class derieved: public base1,public base2,public base3{
public:
void display(){
       cout << "The value of Base1 is " << inp1<<endl;
            cout << "The value of Base2 is " << inp2<<endl;
            cout << "The value of Base3 is " << inp3<<endl;
            cout << "The sum of these values is " << inp1 + inp2 + inp3 << endl;
}
};
int main(){
derieved der;
der.base1calc(1);
der.base2calc(2);
der.base3calc(3);
der.display();

return 0;
}