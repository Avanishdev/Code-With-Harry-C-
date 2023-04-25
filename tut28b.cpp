// Using reference variables
#include<iostream>
using namespace std;
class c2;
class c1{
int val1;
friend void exchange(c1 &,c2&);
public:
void setvalue(int a){
val1=a;
}
void display(void){
    cout<<val1;
};
};
class c2{
int val2;
friend void exchange(c1 &,c2 &);
public:
void setvalue(int a){
val2=a;
}
void display( void){
    cout<<val2;
};
};
void exchange(c1 &x,c2 &y){
int temp=x.val1;
x.val1=y.val2;
y.val2=temp;
}

int main(){
c1 a1;
a1.setvalue(34);
c2 b1;
b1.setvalue(66);

exchange(a1,b1);

    cout<<"The value of c1 after exchanging becomes: "<<endl;
    a1.display();
    cout<<"\nThe value of c2 after exchanging becomes: "<<endl;
    b1.display();
    
return 0;
}