// Friend funcs
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
#include <iostream>
using namespace std;
class complex
{
    int a, b;
    //   friend complex sumComplex(complex c1, complex c2);also can be written here

public:
    friend complex sumComplex(complex c1, complex c2);
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)

    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex sumComplex(complex c1, complex c2)
{
    complex c3;
    c3.setdata((c1.a + c2.a), (c1.b + c2.b));
    return c3;
} // Logic-complex num
int main()
{
    complex c1, c2,sum;
    c1.setdata(1, 4);
    c1.printnum();

    c2.setdata(4, 5);
    c2.printnum();

    sum = sumComplex(c1, c2);
    sum.printnum();
    return 0;
}