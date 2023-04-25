#include<iostream>
using namespace std;
template<class T>
class Marry{
public:
void display();
};
template<class T>
 void Marry<T>::display(){
cout<<"Hello World!"<<endl;
 }
void func(int x){
   
int a=x;
cout<<"The func is called!!"<<a<<endl;
}

template<class T>
void func(T x){
   
T a=x;
cout<<"The overloaded or parameterized func is called!!"<<a<<endl;
}

int main(){
func(2.3);
// func(23);//Exact match-Ambiguity resolved
Marry<int> obj;
obj.display();

return 0;
}