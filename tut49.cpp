#include<iostream>
using namespace std;
class test{
int a;
int b;
public:
// test(int i, int j):a(i),b(j)
// test(int i, int j) : b(j), a(i+b)//declaration and initialization should be in the same order
test(int i, int j) : a(i), b(a + j)
{
    // a=i;
    // b=j;
    cout << "Constructor executed"<<endl;
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
}
};
int main(){
test t(4,5);


return 0;
}