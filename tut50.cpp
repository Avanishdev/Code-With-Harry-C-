#include<iostream>
using namespace std;

int main(){
    //pointers
int a=4;
int *ptr=&a;
cout<<*ptr<<endl;//dereference

int *poi= new int(40);
int *arr=new int [3];
arr[0]=10;
arr[1]=20;
// * (arr+1)=20;
arr[2]=30;
// *(arr+2)=30;
delete arr;
delete[] arr;
cout<<*poi<<endl;
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<*(arr+1)<<endl;
cout<<arr[2]<<endl;

return 0;
}