#include<iostream>
#include <cmath>  
using namespace std;
class point{
int x,y;
friend void distance(point p1,point p2 );
public:
point(int a,int b){
    x=a;
    y=b;
}
void displaypoint(){
 cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
}
};
void distance(point p1,point p2 ){
int dist=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
cout<<"Distance is : "<<dist<<" units";
}
int main(){
point p1(1,1);
p1.displaypoint();
point p2(1,1);
p2.displaypoint();
distance(p1,p2);
return 0;
}