#include <iostream>
using namespace std;
template <class T1,class T2>
float calc(T1 x, T2 y)
{
    float avg = (x + y) / 2.0;
    return avg;
}
template<class T>
void sawp(T &a,T &b){
T temp=a;
a=b;
b=temp;
}
int main()
{
    float x = calc(1, 2.4);
    // cout << x << endl;
    printf("%f\n",x);
    printf("%.3f\n",x);
int a=5,b=7;
swap(a,b);
printf("%d\n",a);
printf("%d\n",b);
    return 0;
}