#include<iostream>
using namespace std;
int main(){

int marks[]={35,95,75,65};

cout<<marks[0]<<endl;
cout<<marks[1]<<endl;

marks[2]=2345;

cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

int mathMarks[4];

mathMarks[0] = 2278;
mathMarks[1]=255;
mathMarks[2]=2505;
mathMarks[3]=2515;

cout<<mathMarks[0]<<endl;
cout<<mathMarks[1]<<endl;

mathMarks[2]=56;
cout<<mathMarks[2]<<endl;
cout<<mathMarks[3]<<endl;
cout<<"Arrays using for,while and do-while loops"<<endl;
// int i=0;
// while(i<4){
// cout<<marks[i]<<endl;
// i++;
// }

// int x=0;
// do{
//     cout<<marks[x]<<endl;
//     x++;
// }while(x<4);


int *p=marks;// -Point using pointers
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

cout<<*p<<endl;// -Derefrence
// cout<<*(p+1)<<endl;
// cout<<*(p+2)<<endl;
// cout<<*(p+3)<<endl;

return 0;
}