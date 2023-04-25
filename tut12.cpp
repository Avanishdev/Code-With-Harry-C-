#include<iostream>
using namespace std;
int main(){

int a=6;
// int *b;
// b=&a;
int *b=&a;
cout<<a<<endl;
cout<<&a<<endl;
// &a and b are same
cout<<b<<endl;
cout<<*b<<endl;
// Pointer to pointer
int **c=&b;
cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
// The above line of code returns the value_at that the given address (returns 6)


return 0;
}