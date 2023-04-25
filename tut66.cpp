#include<iostream>
using namespace std;
template<class t1=int,class t2=float>
class myClass 
{
    t1 a;
    t2 b;
    public:
myClass(t1 x,t2 y){
    a=x;
    b=y;
}
void display(){
    cout<<a<<endl;
    cout<<b<<endl;
}

};
int main(){
myClass<>obj(1,1.6);
obj.display();
myClass <float,int>obj2(1.6,1);
obj2.display();
return 0;
}