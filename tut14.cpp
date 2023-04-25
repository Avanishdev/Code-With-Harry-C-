#include<iostream>
using namespace std;
// struct employee{
//     int employeeid;
//     string favfood;
//     float salary;
// };
// Shorthand
// typedef struct employee{
//     int employeeid;
//     string favfood;
//     float salary;
// }ep;
union money{
int rice;
char car;
float pound;
};
int main(){
// // struct employee harry;
// ep harry;
// ep rohan;
// ep mohan;
// harry.employeeid=1;
// harry.favfood="Bhaji Pav";
// harry.salary=800.0;
// rohan.favfood="Egg curry";
// cout<<harry.favfood<<endl;
// cout<<rohan.favfood<<endl;
// cout<<harry.employeeid<<endl;
// cout<<harry.salary<<endl;
money m1;
m1.rice=34;
// cout<<m1.rice;

enum meal{
    breakfast,lunch,dinner
};
meal m2=lunch;

cout<<(m2==1);
return 0;
}