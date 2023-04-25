#include<iostream>
using namespace std;
// int product(int a,int b){
//     return a*b;
// }
// inline int product(int a,int b){
//     return a*b;
// }
// inline int product(int a,int b){
    
//     static int c=0;
//     c=c+1;

//     return a*b+c;
// }
float money(int a,float factor=1.04){
    return a*factor;
}
// int strlen(const char*p){
  
// }
int main(){
int a,b;
cout<<"Enter the value of a and b "<<endl;
cin>>a>>b;
// cout<<"The product of these two no is "<<product( a, b)<<endl;
int moneyinp=100000;
cout<<"The money returned after one full-year is  "<<money(moneyinp)<<endl;
cout<<"The money returned after one full-year for an employee is  "<<money(moneyinp,1.1)<<endl;
// cout<<"The money returned after one full-year for an employee is  "<<strlen("toofan");
return 0;
}