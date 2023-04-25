#include <iostream>
using namespace std;
class y;
class x
{
    int data;
    friend void add(x, y);

public:
    void inputvalue(int a)
    {
        data = a; // data=a; -> is invalid
    }
}; // obj1
class y
{
    int value;
    friend void add(x, y);

public:
    void inputvalue(int a)
    {
        value = a;
    }
}; // obj2
void add(x o1, y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.value;
}
int main()
{

    x obj1;
    obj1.inputvalue(34);
    y obj2;
    obj2.inputvalue(66);
    add(obj1, obj2);
    return 0;
}

