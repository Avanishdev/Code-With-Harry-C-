#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"func1"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"func2"<<endl;
    return a+b+c;
}
int volume(int r,int h){
    cout<<"Cylinder"<<endl;
    return 3.14*r*r*h;
}
int volume( int a){
    cout<<"Cube"<<endl;
    return a*a*a;
}
int volume(int l,int b,int h){
    cout<<"Rectangular"<<endl;
    return l*b*h;
}
int main(){
cout<<"The sum of these two num is "<<sum(2,3)<<endl; 
cout<<"The sum of these three num is "<<sum(2,3,4)<<endl; 
cout<<"The volume of rectangle is "<<volume(2,3,4)<<endl; 
cout<<"The volume of cube/cuboid is "<<volume(3)<<endl; 
cout<<"The volume of cylinder is "<<volume(3,4)<<endl; 
return 0;
}