#include <iostream>
using namespace std;
// int sum(int x,int y){
//     int z=x+y;
//     return z;
// }
// void swapPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
int & swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
int x=4,y=5;
    // cout<<"The sum of these two num is "<<sum(4,5)<<endl;
    cout<<"The swap of these two num is "<<x<<" "<<y<<endl;
    // swapPointer(&x,&y);// Call by value using pointers
    // swapReferenceVar(x,y);// Call by reference using reference variables
    swapReferenceVar(x,y)=766;
    cout<<"The swap of these two num is "<<x<<" "<<y<<endl;
    return 0;
}