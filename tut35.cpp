#include<iostream>
using namespace std;
int count=0;
class number{
public:
 number(){
 cout<<"This is the time when constructor is called for object number "<<count<<endl;
       count++; }
~number(){
      cout<<"This is the time when my destructor is called for object number "<<count<<endl;
      count--;
}
};


int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
number n1;
{
   cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        number n2,n3;
   cout<<"Exiting this block"<<endl;

}//obj n2,n3 in this block will be destroyed then obj n1 will be destroyed 
 cout<<"Back to main"<<endl;
return 0;
}