#include<iostream>
using namespace std;
void g();
int sum(int a,int b);// Formal parameters(a,b)
// Function Typecasting- type func-name(arguments);
int main(){

int num1,num2;
cout<<"Enter the num1: "<<endl;
cin>>num1;
cout<<"Enter the num2: "<<endl;
cin>>num2;
cout<<"The sum of these two num is "<<sum(num1,num2);// Actual parameters(num1,num2)
g();
return 0;
}
int sum(int a,int b){
    int c=a+b ;
    return c;
}
void g(){
    cout<<"\nHello World! ";
}