#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    float interestrate;
    float returnvalue;
    int years;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); // r can be a value like 0.04
    bankdeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r)/100;
    returnvalue=principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bankdeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnvalue << endl;
}
int main()
{
    bankdeposit b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    b1 = bankdeposit(p, y, r);//dynamic intialization
    b1.show();
    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    b2 = bankdeposit(p, y, R);//dynamic intialization

    b2.show();
    // b3.show();
    return 0;
}