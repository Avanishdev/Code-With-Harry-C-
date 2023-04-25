#include<iostream>
using namespace std;
class complex{
int a,b;
public:
void setdata(int x,int y){
a=x;
b=y;
}
void getdata(){
    cout<<"The real part is "<<a<<"  and the imaginary part is "<<b<<endl;
}
};
 int main(){
complex c;

complex *ptr1=new complex;//new keyword
complex *ptr=&c;//pointer

(*ptr).setdata(1,5);
(*ptr).getdata();

(*ptr1).setdata(1,5);
(*ptr1).getdata();

// ptr->setdata(1,5);
// ptr->getdata();
return 0;
}