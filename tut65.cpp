#include<iostream>
using namespace std;
template<class t1,class t2>
class myClass{
t1 val2,val1;
t2 data2,data1;
public:
myClass(int a,int b,char c,char d){
data1=c;
data2=d;
val1=a;
val2=b;
}
void display(){
    cout<<"The value of char "<<data1<<" is "<<val1
    <<"\nAnd the value of another char "<<data2<<" is "<<val2<<endl;
}
};
int main(){
    int x,y;
    char z,q;
    cout<<"Enter the values: "<<endl;
    cin>>x;
    cin>>y;
    cout<<"Enter char's: "<<endl;
    cin>>z;
    cin>>q;
myClass<int,char> obj(x,y,z,q);
obj.display();

return 0;
}