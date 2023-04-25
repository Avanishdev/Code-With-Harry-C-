#include <iostream>
using namespace std;
class complex; // Forward declaration
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealComplex(complex, complex);
    int sumcompComlex(complex,complex);
};
class complex
{
    int a, b;
     // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcompComlex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2, add;
    c1.setdata(1, 2);
    c1.printnum();
    c2.setdata(3, 4);
    c2.printnum();
    calculator c3;
    int res = c3.sumrealComplex(c1, c2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc=c3.sumcompComlex(c1,c2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;


    return 0;
}