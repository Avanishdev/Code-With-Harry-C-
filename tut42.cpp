#include <iostream>
#include <cmath>
using namespace std;
const float pi = 3.14;
class simplecalculator
{
    int inp1;
    int inp2;

public:
    void getdata()
    {
         cout << "Enter a num: " << endl;
        cin >> inp1;
        cout << "Enter another num: " << endl;
        cin >> inp2;
    }
    void display()
    {
       
        cout << "The sum of these two num is: " << inp1 + inp2 << endl;
        cout << "The minus of these two num is: " << inp2 - inp1 << endl;
        cout << "The multiplication of these two num is: " << inp1 * inp2 << endl;
        cout << "The division of these two num is: " << inp2 / inp1 << endl;
    }
};
class scientificcalculator
{
    float inp1;
    float inp2;

public:
    void setdata()
    {
          cout << "Enter a num: " << endl;
        cin >> inp1;
        cout << "Enter another num: " << endl;
        cin >> inp2;
    }
    void display2()
    {
      
      cout<<inp1<<endl;
        cout << "The sin of the first inp is: " << sin(inp1) << endl;
        cout << "The cos of the first inp is: " << cos(inp1) << endl;
        cout << "The tan of the first inp is: " << tan(inp1) << endl;
        cout << "The exponential of the first inp is: " << exp(inp1) << endl;

        cout<<inp2<<endl;
        cout << "The sin of the second inp is: " << sin(inp2) << endl;
        cout << "The cos of the second inp is: " << cos(inp2) << endl;
        cout << "The tan of the second inp is: " << tan(inp2) << endl;
    }
};
class hybridcalc : public simplecalculator, public scientificcalculator
{

};
int main()
{

    hybridcalc h1;
    h1.getdata();
    h1.display();
    h1.setdata();
    h1.display2();
    return 0;
}