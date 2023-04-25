#include<iostream>
// #include"file_name"
using namespace std;
int main(){
    int a=3,b=4;
    cout<<"Hello World"<<endl;
    // #Arithmetic Operators
    cout<<"The a+b of these two nums is "<<a+b<<endl;
    cout<<"The a-b of these two nums is "<<a-b<<endl;
    cout<<"The a*b of these two nums is "<<a*b<<endl;
    cout<<"The a/b of these two nums is "<<a/b<<endl;
    cout<<"The a%b of these two nums is "<<a%b<<endl;
    cout<<"The a++ of these two nums is "<<a++<<endl;
    cout<<"The a-- of these two nums is "<<a--<<endl;
    cout<<"The ++a of these two nums is "<<++a<<endl;
    cout<<"The --a of these two nums is "<<--a<<endl;
// #Comparison Operators
cout<<"The value  of (a==b) is "<<(a==b)<<endl;
cout<<"The value  of (a!=b) is "<<(a!=b)<<endl;
cout<<"The value  of (a<=b) is "<<(a<=b)<<endl;
cout<<"The value  of (a>=b) is "<<(a>=b)<<endl;
cout<<"The value  of (a>b) is "<<(a>b)<<endl;
cout<<"The value  of (a<b) is "<<(a<b)<<endl;

// #Logical Operators
cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 
return 0;

}