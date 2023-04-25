#include<iostream>
using namespace std;
int factorial(int n){
    if(n<2){
        return 1;
    }
    return n* factorial(n-1);
}
int fib(int a){
    if(a<2){
        return 1;
    }
    return fib(a-2)+ fib(a-1);
}
int main(){
int n;
cout<<"Enter a num "<<endl;
cin>>n;
// cout<<"The factorial of the given no is "<<factorial(n);
cout<<"The fibonacci of the given no is "<<fib(n);

return 0;
}

// #include <iostream>
// using namespace std;
// int fact(int n) {
//    if ((n==0)||(n==1))
//    return 1;
//    else
//    return n*fact(n-1);
// }
// int main() {
//    int n = 45;
//    cout<<"Factorial of "<<n<<" is "<<fact(n);
//    return 0;
// }