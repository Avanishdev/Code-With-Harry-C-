#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex(int x,int y=0){
    a=x;
    b=y;

}
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main(){
complex c1(5);
c1.printNumber();

complex c2(1,2);
c2.printNumber();

return 0;
}
