#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
int arr[]={1,56,78,4,2,89};
// sort(arr,arr+5);
// sort(arr,arr+6,greater<int>());
// sort(arr,arr+6,logical_and<int>());
sort(arr,arr+6,bit_xor<int>());
for (int i = 0; i < 6; i++)
{
   cout<<arr[i]<<endl;
}

return 0;
}